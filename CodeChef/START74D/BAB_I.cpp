#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, positive_min = INT_MAX, negative_max = -INT_MAX;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if(num == 0){
            cout << -1 << endl;
            return;
        }
        else if(abs(num) == 1){
            cout << 0 << endl;
            return;
        }
        if (num > 0)
            positive_min = min(num, positive_min);
        else
            negative_max = max(num, negative_max);
    }
    int ans = min(abs(negative_max) -1, positive_min -1 );
    cout << ans << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}