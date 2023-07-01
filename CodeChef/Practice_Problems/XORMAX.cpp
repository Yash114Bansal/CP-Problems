#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        string a,b,c;
        cin >> a >> b;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<int>());
        for (int i = 0; i < a.size(); i++)
        {
            if(a[i] == b[i]){
                c += '0';
            }else{
                c+= '1';
            }
        }
        // cout << a <<" " <<b << " "; 
        sort(c.begin(),c.end(),greater<int>());
        cout << c << endl;
        
    }
    return 0;
}