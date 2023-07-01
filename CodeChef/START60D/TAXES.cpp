#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int income;
        cin >> income;
        if (income > 100)
        {
            income -= 10;
        }
        cout << income << endl;
    }

    return 0;
}