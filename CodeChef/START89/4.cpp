#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int ,int>
const ll MOD = 1e9+7;

int count_subarrays_with_positive_sum(vector<int>& arr) {
    int left = 0, right = 0, count = 0, n = arr.size();
    while (left < n) {
        int curr_sum = 0;
        while (right < n && curr_sum + arr[right] > 0) {
            curr_sum += arr[right];
            right++;
            count++;
        }
        left++;
        right = left;
    }
    return count;
}
int count_subarrays_with_negative_sum(vector<int>& arr) {
    int left = 0, right = 0, count = 0, n = arr.size();
    while (left < n) {
        int curr_sum = 0;
        while (right < n && curr_sum + arr[right] < 0) {
            curr_sum += arr[right];
            right++;
        }
        count += (right - left);
        left++;
        right = left;
    }
    return count;
}



void solve(){
    int len;
    cin >> len;
    vector<int> array;
    for (int i = 0; i < len; i++)
    {
        int b;
        cin >> b;
        array.push_back((1<<i)*b);
    }
    for(auto i:array){
        cout << i << endl;
    }
    // cout << abs(count_subarrays_with_negative_sum(array) - count_subarrays_with_positive_sum(array));
    cout << count_subarrays_with_positive_sum(array);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}