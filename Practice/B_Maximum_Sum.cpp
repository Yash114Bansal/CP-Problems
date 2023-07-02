#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define umi unordered_map<int, int>
const int MOD = 1e9 + 7;

void solve()
{
    int len, n;
    cin >> len >> n;
    vi array(len);
    for (int i = 0; i < len; i++)
    {
        cin >> array[i];
    }
    sort(array.begin(), array.end());
    int first = 0, second = 1, last = array.size() - 1;
    for (int i = 0; i < n; i++)
    {
        if ((array[first] + array[second]) <= array[last])
        {
            array[first] = 0;
            array[second] = 0;
            first += 2;
            second += 2;
        }
        else
        {
            array[last] = 0;
            last--;
        }
    }
    int sum = 0;
    for(auto i:array){
        sum+=i;
    }
    cout << sum << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}