#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n,a,b;
        cin >> n;
        cin >> a >> b;
        int answer = __gcd(a,b);
        
        for (int i = 0; i < n-2; i++)
        {
            int tmp;
            cin >> tmp;
            answer = __gcd(answer,tmp);
        }
        cout << answer*n << endl;
    }
    
    return 0;
}