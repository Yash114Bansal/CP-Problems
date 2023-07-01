#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int ,int>
const ll MOD = 1e9+7;

void solve(){
    int a;
    cin >> a;
    if(a&1){
        cout << -1 << endl;
    }
    else{
        for (int i = 0; i < a; i++)
        {
            cout << a-i << " ";
        }
        cout << endl;
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