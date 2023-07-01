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
    int t = 10000;
    for (int i = 1; i < t; i++)
    {
        for (int j = 1; j < t; j++)
        {
            int a = gcd(i, j);
            int b = lcm(i, j, a);
            if (a == b)
            {
                if (i != j)
                {
                    cout << i << " " << j << endl;
                }
            }
        }
    }
}
