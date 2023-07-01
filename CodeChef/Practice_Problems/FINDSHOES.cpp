#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int a,b;
        cin >> a >> b;
        if(b>a){
            cout << a << endl;
            continue;
        }
        cout << a*2-b << endl;
    }
    return 0;
}