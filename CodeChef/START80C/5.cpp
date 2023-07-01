#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;

void solve(){
    long long n;
    cin >> n;
    map<long long,long long> mp;
    for (long long i = 0; i < n; i++)
    {
        long long l;
        cin >> l;
        mp[l]++;
    }
    long long r = 1;
    long long answer = 0;
    for (long long i = 1; i < n+1; i++)
    {
        answer += (r*mp[i]) % mod;
        r = (r*mp[i]) ;
        answer = answer%mod;
    }
    cout << answer << endl;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}