#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int ,int>
const ll MOD = 1e9+7;

void solve(){
    int a;
    cin >> a;
    vi arr(a);
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    int mina = INT_MAX;
    for (int i = 0; i < a; i++)
    {
        mina = min(mina,arr[i]);
    }
    int count = 0;
    for (int i = 0; i < a; i++)
    {
        if(arr[i] == mina){
            count++;
        }
    }
    cout << a - count << endl;
    
    
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