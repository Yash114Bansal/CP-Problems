#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int, int>
const ll MOD = 1e9 + 7;

void solve()
{
    int len;
    cin >> len;
    string s;
    cin >> s;
    string ans = "";
    for (int i = 0; i < len; i++)
    {
        ans += s[i];
        for (int j = i+1; j < len; j++)
        {
            if (s[j] == s[i])
            {
                i = j;
                break;
            }
        }
    }
    cout << ans << endl;
}

int main()
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