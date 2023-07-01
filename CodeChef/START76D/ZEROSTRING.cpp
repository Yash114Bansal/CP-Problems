#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int length;
    cin >> length;
    string array;
    cin >> array;
    int number_of_zeroes = 0;
    int number_of_ones = 0;
    int count;

    for (int i = 0; i < length; i++)
    {
        if (array[i] == '1')
        {
            number_of_ones++;
        }
        else
        {
            number_of_zeroes++;
        }
        count = min(number_of_ones, number_of_zeroes);

        if (count == number_of_zeroes && number_of_ones != number_of_zeroes)
        {
            count++;
        }
    }
    cout << count << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}