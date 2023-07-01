#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int ,int>
const ll MOD = 1e9+7;

void solve(){
    int len;
    cin >> len;
    string s;
    cin >> s;
    int server = 0; //ALICE
    int alicescore = 0;
    int bob_score = 0;
    for (int i = 0; i < len; i++)
    {
        if(s[i] == 'A' && !server){
            alicescore++;
        }else if(s[i] == 'B' && server){
            bob_score++;
        }else{
            server = !server;
        }
    }
    cout << alicescore << " " << bob_score << endl;
    
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