#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int length;
        cin >> length;
        vector<int> array1;

        for (int i = 0; i < length * 2; i++)
        {
            int temp;
            cin >> temp;
            array1.push_back(temp);
        }
        sort(array1.begin(),array1.end());
        int answer = INT16_MAX;
        for (int i = 0; i <= length; i++)
        {
            answer = min(answer, array1[length + i - 1] - array1[i]);
        }
        for (int i = 0; i < length*2; i++)
        {
            cout << array1[i] << " ";
        }
        
        if (length == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << answer << endl;
        }
    }
    return 0;
}