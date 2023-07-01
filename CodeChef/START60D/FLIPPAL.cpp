#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int length;
        cin >> length;
        string s;
        cin >> s;
        int count0 = 0;
        int count1 = 0;
        for (int j = 0; j < length; j++)
        {
            if (int(s[j]) == 48)
            {
                count0++;
            }
            else
            {
                count1++;
            }
        }
        if (count0 & 1 && count1 & 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}