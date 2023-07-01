#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int, int>
const ll MOD = 1e9 + 7;

void solve()
{
    ll len, to_find;
    ll and_all = -1;
    cin >> len >> to_find;
    for (ll i = 0; i < len; i++)
    {
        ll temp;
        cin >> temp;
        if (temp > to_find && ((temp & to_find) >= to_find))
        {
            and_all &= temp;
        }
        else if (temp == to_find)
        {
            cout << "YES" << endl;
            return;
        }
    }
    if (and_all == to_find)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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