#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int ,int>
const ll MOD = 1e9+7;

void solve(){
    int n;
    cin >> n;
    vi array(n);
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int score = 0;
    for (int i = 0; i < n-1; i++)
    {
        if(array[i] == array[i+1]){
            score++;
        }
    }
    i
    
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}