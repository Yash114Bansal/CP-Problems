#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, x;
        cin >> n >> x;
        int array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        sort(array, array + n);
        if (x > n)
        {
            cout << array[n-1] << endl;
            continue;
        }
        cout << array[x] << endl;
    }
    return 0;
}