#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int ,int>
const ll MOD = 1e9+7;

void solve(){
    string s;
    cin >> s;
    int d1 = (s[0]-'0')*10 + (s[1]-'0');
    int d2 = (s[3]-'0')*10 + (s[4]-'0');
    int d3 = (s[6]-'0')*1000 + (s[7]-'0')*100 + (s[8]-'0')*10 + (s[9]-'0');
    // cout << d1 << d2 << d3 << endl;

    if(d1 <=12 && d2 <=12 ){
        cout << "BOTH" << endl;
        return;
    }
    if(d1 <=12 && d2>12){
        cout << "MM/DD/YYYY" << endl;
    }
    if(d2<=12 && d1>12){
        cout << "DD/MM/YYYY" << endl;
    }

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