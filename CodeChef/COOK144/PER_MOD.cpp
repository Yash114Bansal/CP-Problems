#include<bits/stdc++.h>
using namespace std;

void solve(){
    int number;
    cin >> number;
    for (int i = 2; i <= number; i++)
    {
        cout << i << " ";
    }
    cout << 1 << " " << endl;;
    
    
}

int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}