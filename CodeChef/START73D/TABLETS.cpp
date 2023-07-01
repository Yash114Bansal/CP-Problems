#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int X, Y;
        cin >> X >> Y;
        if(Y >= 3*X){
            cout  << "YES" << endl;
            continue;
        }
        cout  << "NO" << endl;
    }
    return 0;
}