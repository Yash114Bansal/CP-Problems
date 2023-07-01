#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    int x = __gcd(a, b);
    int lcm = (a * x) / __gcd(a, x);
    int gcd = __gcd(b, x);
    cout << lcm - gcd << endl;
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