#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int ,int>
const ll MOD = 1e9+7;

void solve(){
    int N ,a ,b;
    cin >> N >> a >>b;
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        if(i&1){
            ans +=b;
            continue;
        }
        ans+=a;
    }
    cout << ans << endl;
    
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