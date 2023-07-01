#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define umi unordered_map<int, int>
const int MOD = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    if(n<10){
        cout << n << endl;
        return;
    }if(n == 10){
        cout << 9 << endl;
        return;
    }
    int answer = 0;
    for (int i = 1; i < 10; i++)
    {
        string st = to_string(i);
        while (stoll(st) <= n)
        {
            st += to_string(i);
            answer++;
        }
        
    }
    cout << answer << endl;
    
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}