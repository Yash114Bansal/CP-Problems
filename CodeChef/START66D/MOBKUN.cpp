#include <iostream>
using namespace std;

int main()
{
    int Test;
    cin >> Test;
    for (int i = 0; i < Test; i++)
    {
        int N, M, K, X;
        cin >> N >> M >> K >> X;
        int leap_year_days = N + M;
        int index = 1;
        while (X >= N)
        {
            if (index % K == 0)
            {
                X -= leap_year_days;
            }
            else
            {
                X -= N;
            }
            index++;
        }
        if (X < 0)
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