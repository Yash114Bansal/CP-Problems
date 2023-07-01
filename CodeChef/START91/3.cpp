#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int, int>
const ll MOD = 1e9 + 7;

void solve()
{
    ll N, K;
    cin >> N >> K;
    ll no_of_odds = (N + 1) / 2;
    if (K > no_of_odds || N < K * 2)
    {
        cout << "NO" << endl;
        return;
    }
    no_of_odds -= K - 1;
    if (no_of_odds & 1)
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