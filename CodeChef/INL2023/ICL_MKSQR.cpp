#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int side = min(a,min(b,min(c,d)));
    int ans = 0;
    ans += a-side;
    ans += b-side;
    ans += c-side;
    ans += d-side;
    cout << ans << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}