#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int answ = 1;
        for (int i = 1; i < n + 1; i++)
        {
            cout << answ << " ";
            if (i % 2 != 0)
            {
                answ++;
                continue;
            }
            answ = answ + 3;
        }
        cout << endl;
    }
    return 0;
}