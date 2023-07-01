#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int min_numb = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        num = abs(num);
        min_numb = min(min_numb, num);
    }
    if (min_numb == 0)
    {
        cout << -1 << endl;
        return;
    }
    if (min_numb == 1)
    {
        cout << 0 << endl;
        return;
    }
    cout << min_numb - 1 << endl;
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