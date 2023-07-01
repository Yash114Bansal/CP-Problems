#include <iostream>
using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a > (b + c + d )|| b > (a + c + d) || c > (a + b + d) || d > (a + b + c))
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
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
