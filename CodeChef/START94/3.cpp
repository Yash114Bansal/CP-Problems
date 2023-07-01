#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int, int>
const ll MOD = 1e9 + 7;

void solve()
{
    ll len, to_find;
    cin >> len >> to_find;
    vi array;
    for (ll i = 0; i < len; i++)
    {
        ll temp;
        cin >> temp;
        if (temp > to_find && ((temp & to_find) >= to_find))
        {
            array.push_back(temp);
        }
        else if (temp == to_find)
        {
            cout << "YES" << endl;
            return;
        }
    }
    if (array.size() == 0)
    {
        cout << "NO" << endl;
        return;
    }
    ll lol = array[0];
    for (auto i : array)
    {
        lol &= i;
    }

    if (lol == to_find)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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