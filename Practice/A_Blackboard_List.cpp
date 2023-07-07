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
    if(array[0] < 0){
        cout << array[0] << endl;
        return;
    }
    cout << array[len-1] << endl;
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