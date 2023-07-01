#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        unordered_map<int, int> m;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int number;
            cin >> number;
            m[number]++;
        }
        bool check = true;
        for (auto keyval : m)
        {
            if (keyval.second % 2 != 0)
            {
                check = false;
                break;
            }
        }
        if (check)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}