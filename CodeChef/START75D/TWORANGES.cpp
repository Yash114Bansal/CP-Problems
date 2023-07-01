#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    set<int> sett;
    for (int i = a; i <= b; i++)
    {
        sett.insert(i);
    }
    
    for (int i = x; i <= y; i++)
    {
        sett.insert(i);
    }
    cout << sett.size() << endl;
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