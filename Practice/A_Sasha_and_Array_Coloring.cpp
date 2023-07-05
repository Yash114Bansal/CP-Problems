#include<bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define umi unordered_map<int ,int>
const int MOD = 1e9+7;

void solve(){
    int len;
    cin >> len;
    vi array(len);
    for (int i = 0; i < len; i++)
    {
        cin >> array[i];
    }
    sort(array.begin(),array.end());
    int answer = 0;
    for (int i = 0; i < len/2; i++)
    {
        answer+= array[len-1-i] -array[i];
    }
    cout << answer << endl;
}

signed main(){
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