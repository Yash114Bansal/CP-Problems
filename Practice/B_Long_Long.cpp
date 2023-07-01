#include<bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define umi unordered_map<int ,int>
const int MOD = 1e9+7;

void solve(){
    int len;
    cin >> len;
    int negative_count = 0;
    int summ = 0;
    int answer = 0;
    for (int i = 0; i < len; i++)
    {
        int num;
        cin >> num;
        summ += abs(num);
        if(!num){
            continue;
        }
        if(num < 0){
            negative_count++;
        }else{
            if(negative_count){
                answer++;
                negative_count = 0;
            }
        }
    }
    if(negative_count){
        answer++;
    }
    cout << summ << " " << answer << endl;
}

signed main(){
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