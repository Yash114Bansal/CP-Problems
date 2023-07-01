#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int array1[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array1[i];
        }
        string s;
        cin >> s;
        int answer = INT16_MAX;
        for (int i = 0; i < n; i++)
        {
            if(s[i] == '0'){
                answer = min(answer,array1[i]);
            }
        }
        
        cout << answer << endl;
    }
    
    return 0;
}