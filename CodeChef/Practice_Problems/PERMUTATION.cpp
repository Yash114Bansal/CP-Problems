#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        sort(array, array + n, greater<int>());
        int answer = 0;
        bool done = true;
        int mm = n;
        for (int i = 0; i < mm; i++)
        {
            int temp = n - array[i];
            if (temp < 0)
            {
                cout << -1 << endl;
                done = false;
                break;
            }
            answer += temp;
            n--;
        }
        if(done)
            cout << answer << endl;
    }
    return 0;
}