#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b;
        cin >> a >> b;
        b > a ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}