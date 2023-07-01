#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int x;
        cin >> x;
        bool found = false;
        while (x != 0)
        {
            int t = x % 10;
            x = x / 10;
            if (t == 7)
            {
                found = true;
            }
        }
        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}