#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int a,b,c;
        cin >> a >> b >> c;
        if(a*b <0 || b*c < 0 || a*c < 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}