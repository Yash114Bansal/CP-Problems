#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        float A, X, B, Y;
        cin >> A >> X >> B >> Y;
        float alice_speed = A / X;
        float bob_speed = B / Y;
        if (alice_speed > bob_speed)
        {
            cout << "Alice" << endl;
        }
        else if (bob_speed > alice_speed)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Equal" << endl;
        }
    }

    return 0;
}