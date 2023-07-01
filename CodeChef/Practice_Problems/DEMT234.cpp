#include <bits/stdc++.h>
using namespace std;

int flis(int arr[], int n, int l, int r)
{
    int maxLength = 0;
    int curLength = 1;

    for (int i = l + 1; i <= r; i++)
    {
        if (arr[i] >= arr[i - 1])
            curLength++;
        else
        {
            maxLength = max(maxLength, curLength);
            curLength = 1;
        }
    }

    maxLength = max(maxLength, curLength);
    return maxLength;
}

void solve()
{
    int length, nq;
    cin >> length >> nq;
    int array[length];
    for (int i = 0; i < length; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < nq; i++)
    {
        int type;
        cin >> type;


        if (type == 1)
        {
            int i, x;
            cin >> i >> x;
            array[i-1] = x;
        }
        else
        {
            int l, r;
            cin >> l >> r;
            cout << flis(array, length, l-1, r-1) << endl;
        }
    }
}

int main()
{
    solve();
    return 0;
}