#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int, int>
const ll MOD = 1e9 + 7;

void solve()
{
    int l;
    cin >> l;
    string s;
    cin >> s;
    int count = 1;
    int i;
    for (i = 1; i < l; i++)
    {
        if (s[i - 1] == s[i])
        {
            count++;
        }
        else
        {
            if (count & 1)
            {
                cout << s[i - 1];
            }
            else
            {
                cout << s[i - 1];
                cout << s[i - 1];
            }
            count = 1;
        }
    }
    if (count & 1)
    {
        cout << s[i-1];
    }
    else
    {
        cout << s[i-1];
        cout << s[i-1];
    }
    cout << endl;
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