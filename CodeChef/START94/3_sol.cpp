#include <iostream>
using namespace std;

#define ll long long

void solve()
{
    ll len, to_find;
    ll and_all = -1;
    cin >> len >> to_find;
    for (ll i = 0; i < len; i++)
    {
        ll temp;
        cin >> temp;
        if ((temp & to_find) == to_find)
        {
            and_all &= temp;
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