#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int l;
        cin >> l;
        char array[l];
        int nz = 0;
        int no = 0;
        int anss;
        for (int i = 0; i < l; i++)
        {
            cin >> array[i];
            if (array[i] == '0')
            {
                nz++;
            }
            else
            {
                no++;
            }
            anss = min(no, nz);

            if (anss == nz)
            {
                if(no!=nz)
                    anss++;
            }
            else
            {
                anss += 0;
            }
        }
        cout << anss << endl;
    }
    return 0;
}