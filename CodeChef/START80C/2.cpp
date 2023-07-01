#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    float alice[n];
    float bob[n];
    for (int i = 0; i < n; i++)
    {
        cin >> alice[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> bob[i];
    }
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (!(bob[i] > 2 * alice[i]) && !(bob[i]*2 < alice[i])) 
        {
            ans++;
        }
    
    }
    cout << ans <<endl;
}

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
