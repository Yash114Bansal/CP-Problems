#include<bits/stdc++.h>
using namespace std;

void solve(){
    int length;
    cin >> length;
    string s;
    cin >> s;
    int array[26] = {0};
    int answer = length - 2;
    for (int i = 0; i < length; i++)
    {
        if(array[s[i]-'a']){
            cout << answer << endl;
            return;
        }
        array[s[i]-'a']++;
    }
    cout << -1 << endl;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}