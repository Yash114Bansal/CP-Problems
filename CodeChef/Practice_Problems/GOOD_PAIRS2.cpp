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

int lcm(int a, int b, int gc)
{
    return a * b / gc;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int gp = 0;
        int size;
        cin >> size;
        int array[size];
        for (int j = 0; j < size; j++)
        {
            cin >> array[j];
        }
        for (int k = 0; k < size; k++)
        {
            for (int m = k+1; m < size; m++)
            {

                int gc = gcd(array[k], array[m]);
                int lc = lcm(array[k], array[m], gc);
                if (lc == gc)
                {
                    gp++;
                }
            }
        }
    cout << gp << endl;
    }
}
