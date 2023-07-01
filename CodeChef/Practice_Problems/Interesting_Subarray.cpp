#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int len;
        cin >> len;
        int array[len];
        for (int i = 0; i < len; i++)
        {
            cin >> array[i];
        }
        int min = INT16_MAX, max = INT16_MIN;
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < len; j++)
            {
                int prod = array[i] * array[j];
                if (prod > max)
                {
                    max = prod;
                }
                if (prod < min)
                {
                    min = prod;
                }
            }
        }
        cout << min << " " << max << endl;
    }

    return 0;
}
//