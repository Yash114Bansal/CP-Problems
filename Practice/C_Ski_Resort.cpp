#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int, int>
const ll MOD = 1e9 + 7;

void solve()
{
    ll len, minimum_days, comfort_temp;
    cin >> len >> minimum_days >> comfort_temp;
    ll n = 0;
    ll answer = 0;
    for (ll i = 0; i < len; i++)
    {
        ll temp;
        cin >> temp;
        if (temp <= comfort_temp)
        {
            n++;
        }
        else
        {
            if (n >= minimum_days)
            {
                answer += (n - minimum_days + 1) * (n - minimum_days + 2) / 2;
            }
            n = 0;
        }
    }
    if (n >= minimum_days)
    {

        answer += (n - minimum_days + 1) * (n - minimum_days + 2) / 2;
    }
    cout << answer << endl;
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