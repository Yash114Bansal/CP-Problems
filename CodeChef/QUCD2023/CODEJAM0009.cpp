#include<bits/stdc++.h>
using namespace std;

void solve(){
    int len;
    cin >> len;
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    int mid = s[len/2];
    int ans = 0;
    for (int i = 0; i < len; i++)
    {
        ans += abs(mid-s[i]);
    }
    cout << ans << endl;
    
    

}

int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}