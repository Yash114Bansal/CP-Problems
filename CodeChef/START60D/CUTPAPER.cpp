#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int big, small;
        cin >> big >> small;
        int p = big / small;
        cout << p*p << endl;
    }

    return 0;
}