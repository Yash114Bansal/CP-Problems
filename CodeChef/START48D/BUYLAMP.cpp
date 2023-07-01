#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K, X, Y;
        int total_cost = 0;
        cin >> N >> K >> X >> Y;
        total_cost += K * X;
        N -= K;
        if (X < Y)
        {
            total_cost += X * N;
        }
        else
        {
            total_cost += Y * N;
        }
        cout << total_cost << endl;
    }

    return 0;
}