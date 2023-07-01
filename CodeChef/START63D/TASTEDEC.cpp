#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int X, Y;
        cin >> X >> Y;
        X = X * 2;
        Y = Y * 5;
        if (X > Y)
        {
            cout << "Chocolate" << endl;
        }
        else if (X < Y)
        {

            cout << "Candy" << endl;
        }
        else
        {
            cout << "Either" << endl;
        }
    }

    return 0;
}