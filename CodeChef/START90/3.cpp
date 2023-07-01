#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int ,int>
const ll MOD = 1e9+7;

void solve(){
    int l;
    cin >> l;
    string s;
    cin >> s;
    unordered_map<char,int> mp;

    for (auto i:s){
        mp[i]++;
    }
    int odd = 0;
    int even = 0;
    for(auto kv:mp){
        if(kv.second&1){
            odd++;
        }else{
            even++;
        }
    }
    if(odd>1){
        cout << 0 << endl;
        return;
    }
    if(mp.size() == 1){
        for(auto kv:mp){
            if(kv.second&1){
                cout << 2 << endl;
                return;
            }
        }
    }
    cout << 1 << endl;

    
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