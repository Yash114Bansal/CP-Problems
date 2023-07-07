#include <bits/stdc++.h>

using namespace std;
#define int long long
#define vi vector<int>
#define umi unordered_map<int, int>
const int MOD = 1e9 + 7;

int nC2(int n)
{

    return n * (n - 1) / 2;
}

void solve()
{
    int len, query;
    cin >> len >> query;
    vi array(len);
    for (int i = 0; i < len; i++)
    {
        cin >> array[i];
    }
    sort(array.begin(), array.end());
    vi answer;
    for (int i = 0; i < len; i++)
    {
        if (len - i == 3)
        {
            answer.push_back(min(array[len - 1], min(array[len - 2], array[len - 3])));
            break;
        }
        int out = len - i - 1;
        int times = nC2(out);
        for (int j = 0; j < times; j++)
        {
            answer.push_back(array[i]);
        }
    }

    for (int i = 0; i < query; i++)
    {
        int temp;
        cin >> temp;
        cout << answer[temp - 1] << endl;
    }
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