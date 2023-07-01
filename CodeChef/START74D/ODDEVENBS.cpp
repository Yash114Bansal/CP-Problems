#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int even_count = 0;
    int odd_count = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp == 1)
        {
            odd_count++;
        }
        else
        {
            even_count++;
        }
    }
    if (!(n & 1) && !(odd_count & 1))
    {
        cout << "YES" << endl;
        return;
    }
    if ((n & 1) && (odd_count & 1))
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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