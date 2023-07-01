#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        bool got = false;
        char array[5] = {'a', 'e', 'i', 'o', 'u'};
        cin >> s;
        for (int j = 0; j < s.length() - 2; j++)
        {
            bool a = false, b = false, c = false;
            for (int m = 0; m < 5; m++)
            {
                if (s[j] == array[m])
                {
                    a = true;
                }
                if (s[j + 1] == array[m])
                {
                    b = true;
                }
                if (s[j + 2] == array[m])
                {
                    c = true;
                }
            }
            if (a && b && c)
            {
                got = true;
                break;
            }
        }
        if (got)
        {
            cout << "Happy" << endl;
        }
        else
        {
            cout << "Sad" << endl;
        }
    }

    return 0;
}