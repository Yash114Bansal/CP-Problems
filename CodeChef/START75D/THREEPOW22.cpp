#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int length;
    cin >> length;

    string binary;
    cin >> binary;

    int counter = 0;

    if (binary == "10" || binary == "1")
    {
        cout << "NO" << endl;
        return;
    }
    for (int i = 0; i < length; i++)
    {
        if (binary[i] == '1')
        {
            counter++;
        }
    }
    if (counter < 4)
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