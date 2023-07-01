#include <bits/stdc++.h>
using namespace std;

int maxFreq(int *arr, int n)
{
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int maxFreq = 0;
    int maxNum = arr[0];

    for (auto it : freq) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            maxNum = it.first;
        }
    }
    return maxFreq;
}

void solve(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << n-maxFreq(arr,n) << endl;
    
}

int main(){
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    
    return 0;
}