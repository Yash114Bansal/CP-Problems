#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        x = x * y;
        if (x % 4)
        {
            y = x / 4 + 1;
        }
        else
        {
            y = x / 4;
        }
        cout << y << endl;
    }

    return 0;
}