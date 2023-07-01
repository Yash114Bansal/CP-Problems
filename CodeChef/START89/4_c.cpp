#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int, int>
const ll MOD = 1e9 + 7;

void solve()
{
    ll n;
    cin >> n;
    ll count = 0;
    for (ll i = 0; i < n; i++)
    {
        ll c;
        cin >> c;
        if (c < 0)
        {
            count += (i + 1);
        }
    }
    ll p = n * (n + 1) / 2 - count;
    cout << abs(count - p) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}