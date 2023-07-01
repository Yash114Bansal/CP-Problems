#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int size;
        cin >> size;
        int array[size];
        for (int j = 0; j < size; j++)
        {
            cin >> array[j];
        }
        int p = sizeof(array) / sizeof(array[0]);
        sort(array, array + p);
        int occurance = 1;
        int good_pairs = 0;
        for (int j = 0; j < size; j++)
            if (array[j] == array[j + 1])
            {
                occurance++;
                continue;
            }
            if (occurance > 1)
            {
                for (int c = 1; c < occurance; c++)
                {
                    good_pairs += c;
                }
                occurance = 1;
            }
        }
        cout << good_pairs << endl;
    }
}
