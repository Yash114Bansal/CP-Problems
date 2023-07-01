#include <iostream>
using namespace std;

void solve()
{
    int a, b, n;
    cin >> a >> b >> n;
    int total_numbers = b - a;

    if (total_numbers < n || total_numbers % n != 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
}
