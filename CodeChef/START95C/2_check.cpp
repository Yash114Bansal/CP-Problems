#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int ,int>
const ll MOD = 1e9+7;

void solve(){
    int N;
    cin >> N;
    unordered_map<string,int> mp;
    vector<string> stack;
    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        stack.push_back(s);
        mp[s]++;
    }
    reverse(stack.begin(),stack.end());
    for(auto i:stack){
        if(mp[i]){
            cout <<i[i.size()-2]<< i[i.size()-1] ;
            mp[i] = 0;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
        solve();
    return 0;
}