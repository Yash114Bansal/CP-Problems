#include <bits/stdc++.h>
using namespace std;
bool isPerfectSquare(long double x)
{
    if (x >= 0)
    {
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n;
        cin >> n;
        int array[n];
        for (int j = 0; j < n; j++)
        {
            array[j] = j + 1;
        }
        int sizee = sizeof(array) / sizeof(array[0]);
        do
        {
            bool got = false;
            int l;
            for (l = 0; l < n - 1; l++)
            {
                if (!isPerfectSquare(array[l] * array[l + 1]))
                {
                    break;
                }
            }
            if (l == n - 1)
            {
                got = true;
                for (int j = 0; j < n; j++)
                {
                    cout << array[j] << " ";
                }
            }

        } while (next_permutation(array, array + sizee));
    }
    return 0;
}