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
    if (s.size() < 2)
    {
        cout << s << endl;
        return;
    }
    int tens = 10 * (s[s.size() - 2] - '0') + s[s.size() - 1] - '0';
    cout << tens % 20 << endl;
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