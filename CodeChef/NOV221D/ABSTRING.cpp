#include <iostream>
#include <string>
using namespace std;

bool is_odd(int n)
{
    return (n & 1);
}

int main()
{
    int T;
    cin >> T;
    for (int ll = 0; ll < T; ll++)
    {
        int array[26];
        int length;
        cin >> length;
        char strin[length];
        cin >> strin;
        for (int i = 0; i < 26; i++)
        {
            array[i] = 0;
        }
        
        for (int i = 0; i < length; i++)
        {
            int temp = strin[i] - 97;
            array[temp] = array[temp] + 1;
        }
        bool answer = true;
        for (int i = 0; i < 26; i++)
        {
            if (is_odd(array[i]))
            {
                answer = false;
            }
        }
        if (answer)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}