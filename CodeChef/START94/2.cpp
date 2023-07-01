#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int, int>
const ll MOD = 1e9 + 7;

void solve()
{
    ll l;
    cin >> l;
    ll om = 0;
    ll addy = 0;
    ll current = 0;
    for (ll i = 0; i < l; i++)
    {
        ll temp;
        cin >> temp;
        if (temp)
        {
            current++;
        }
        else
        {
            current = 0;
        }
        om = max(om, current);
    }
    current = 0;
    for (ll i = 0; i < l; i++)
    {
        ll temp;
        cin >> temp;
        if (temp)
        {
            current++;
        }
        else
        {
            current = 0;
        }
        addy = max(addy, current);
    }
    if (addy > om)
    {
        cout << "Addy" << endl;
    }
    else if (om > addy)
    {
        cout << "Om" << endl;
    }
    else
    {
        cout << "Draw" << endl;
    }
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