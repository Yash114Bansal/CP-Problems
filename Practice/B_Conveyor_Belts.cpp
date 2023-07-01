#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int, int>
const ll MOD = 1e9 + 7;

void solve()
{
    int n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    int first_diagonal = min(min(x1, n - x1 + 1), min(y1, n - y1 + 1));
    int second_diagonal = min(min(x2, n - x2 + 1), min(y2, n - y2 + 1));
    cout << abs(first_diagonal - second_diagonal) << endl;
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