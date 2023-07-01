#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int x,a,b;
        cin >> x >> a >> b;
        string s;
        cin >> s;
        bool operation = false;
        for (int i = 0; i < x-1; i++)
        {
            if(s[i]!=s[i+1]){
                operation = true;
                break;
            }
        }
        if(operation)
            cout << min(a,b) << endl;
        else
            cout << 0 << endl;
        
        
    }
    return 0;
}