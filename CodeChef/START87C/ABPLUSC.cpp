#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll x;
    cin >> x;
    if(x<=1){
        cout << -1 << endl;
        return;
    }
    if(x==2){
        cout << 1 << " " << 1 <<" " << 1 << endl;
        return;

    }
    if(x&1){
        cout << 2 << " " << x/2 << " "<< 1 << endl;
    }else{
        cout << (x-2)/2 << " " << 2 << " " << 2 << endl;
    }
}

int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}