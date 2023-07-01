#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, c, answer;
        cin >> a >> b >> c;
        for (int i = 2; i < 101; i++)
        {
            if (a % i != 0 && b % i != 0 && c % i != 0)
            {
                answer = i;
                break;
            }
        }
        cout << answer << endl;
    }

    return 0;
}