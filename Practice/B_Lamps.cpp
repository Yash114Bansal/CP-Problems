#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define umi unordered_map<int, int>

void solve()
{
    int n;
    cin >> n;
    unordered_map<int, vi> mp;
    vi elements;
    for (int i = 0; i < n; i++)
    {
        int temp, freq;
        cin >> temp >> freq;

        mp[temp].push_back(freq);
        if (mp[temp].size() < 2)
        {
            elements.push_back(temp);
        }
    }
    sort(elements.begin(), elements.end());
    for (auto &kv : mp)
    {
        sort(kv.second.begin(), kv.second.end());
    }

    int answer = 0;
    for (auto i : elements)
    {
        int current_index = 1;
        int vlen = mp[i].size();
        while (current_index <= i && vlen - current_index >= 0)
        {
            answer += mp[i][vlen - current_index];
            current_index++;
        }
    }
    cout << answer << endl;
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