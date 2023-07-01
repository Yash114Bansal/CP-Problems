#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, c, x;
        cin >> a >> b >> c >> x;
        if (a + b >= x || b + c >= x || a + c >= x)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
