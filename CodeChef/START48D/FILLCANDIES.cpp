#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K, M;
        cin >> N >> K >> M;
        int total = K * M;
        int answer;
        if (N % total == 0)
        {
            cout << N / total <<endl;
            continue;
        }
        cout << N / total + 1 <<endl;
    }

    return 0;
}