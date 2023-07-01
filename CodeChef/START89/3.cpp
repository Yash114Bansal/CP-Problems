#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int ,int>
const ll MOD = 1e9+7;

void solve(){
    int num;
    cin >> num;
    if(num == 1){
        cout << 3 << endl;
        return;
    }
    int count = 1;
    count += num; // Positive +2
    count += num; // Negative -1
    // count +=  (num+1)/2; // Positive +1
    if(num>0)
        count += num-1;
    cout << count << endl;
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