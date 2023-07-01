#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        float A, B, X, Y;
        cin >> A >> B >> X >> Y;
        float c, d;
        c = 1 / X;
        d = 1 / Y;
        c = c * A;
        d = d * B;
        if (c > d)
        {
            cout << "Chefina" << endl;
        }
        else if (c < d)
        {
            cout << "Chef" << endl;
        }
        else
        {
            cout << "Both" << endl;
        }
    }

    return 0;
}