#include<bits/stdc++.h>
using namespace std;

void solve(){
    int len;
    cin >> len;
    vector<int> v(len);
    for (int i = 0; i < len; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int current = v[0];
    int count = 0;
    int length = 0;
    v.push_back(INT_MAX);
    for (int i = 0; i < len+1; i++)
    {
        
        if(current == v[i]){
            length ++;
        }
        else{
            count += length*2 - 2;
            current = v[i];
        }
        
    }
    // count += length*2 - 2;
    cout << count << endl;
    
}

int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}