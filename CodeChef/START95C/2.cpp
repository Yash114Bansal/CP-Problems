#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int, int>
const ll MOD = 1e9 + 7;

void solve()
{
    int N;
    cin >> N;
    unordered_map<string,int> mp;
    vector<string> stack;
    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        stack.push_back(s);
        if(!mp[s]){
            mp[s] = i;
        }else{
            stack[mp[s]] = "Kickmeoutlol";
            mp[s] = i;
        }
    }
    reverse(stack.begin(),stack.end());
    for(auto i: stack){
        if(i!="Kickmeoutlol"){
            cout << i << endl;
        }
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}