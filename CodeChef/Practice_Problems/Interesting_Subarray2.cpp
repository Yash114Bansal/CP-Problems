#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int len, min, max;
        cin >> len;
        int array[len];
        for (int i = 0; i < len; i++)
        {
            cin >> array[i];
        }
        int p = sizeof(array) / sizeof(array[0]);
        sort(array, array + p);
        min = array[0] * array[0];
        max = array[len - 1] * array[len - 1];
        if (array[0] < 0)
        {
            if (max < min)
            {
                max = min;
            }
            min = array[0] * array[len - 1];
        }

        cout << min << " " << max << endl;
    }

    return 0;
}
