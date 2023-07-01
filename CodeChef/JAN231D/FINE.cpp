#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int speed;
        cin >> speed;
        if (speed <=70)
        {
            cout << 0 << endl;
        }
        else if (speed<=100)
        {
            cout << 500 << endl;
        }
        else
        {
            cout << 2000 << endl;
        }
        
        
        
    }
    return 0;
}