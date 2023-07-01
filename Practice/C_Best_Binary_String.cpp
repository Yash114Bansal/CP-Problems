#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int, int>
const ll MOD = 1e9 + 7;

void solve()
{
    string s;
    cin >> s;
    char p = '0';
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == p)
        {
            continue;
        }
        else if (s[i] == '?')
        {
            s[i] = p;
        }
        else
        {
            p = s[i];
        }
    }
    cout << s << endl;
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