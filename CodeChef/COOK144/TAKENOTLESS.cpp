#include<bits/stdc++.h>
using namespace std;

void solve(){
    int length;
    cin >> length;
    vector<int> array;
    for (int i = 0; i < length; i++)
    {
        int temp;
        cin >> temp;
        array.push_back(temp);
    }
    sort(array.begin(),array.end());
    reverse(array.begin(),array.end());
    map<int ,int> m;
    for (int i = 0; i < length; i++)
    {
        m[array[i]]++;
    }
    int result = 0;
    for(auto &kv:m){
        if(kv.second%2 == 1){
            result=1;
            break;
        }
    }
    if(result){
        cout << "Marichka" << endl;
    }
    else{
        cout << "Zenyk" << endl;
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