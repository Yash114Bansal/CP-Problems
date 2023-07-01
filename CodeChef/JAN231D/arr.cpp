#include <bits/stdc++.h>
using namespace std;
void solve(){
        int n;
        cin >> n;

        vector<int> array1;

        for (int i = 0; i < n * 2; i++)
        {
            int x;
            cin >> x;
            array1.push_back(x);
        }

        sort(array1.begin(), array1.end());
        int answer = INT_MAX;
        for (int i = 0; i <= n; i++)
        {
            answer = min(array1[i + n - 1] - array1[i], answer);
        }
        if (n == 1){
            cout << 0 << endl;
            return;
        }
        cout << answer << endl;

}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}