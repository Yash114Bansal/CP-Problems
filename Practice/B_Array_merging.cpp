#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define umi unordered_map<int, int>
const int MOD = 1e9 + 7;

void solve()
{
    int l;
    cin >> l;
    umi mp1;
    umi mp2;
    int current_element;
    cin >> current_element;
    int current_freq = 1;
    int element;
    for (int i = 1; i < l; i++)
    {
        cin >> element;
        if (element == current_element)
        {
            current_freq++;
        }
        else
        {
            mp1[current_element] = max(mp1[current_element], current_freq);
            current_element = element;
            current_freq = 1;
        }
    }
    mp1[current_element] = max(mp1[current_element], current_freq);
    cin >> current_element;
    current_freq = 1;
    for (int i = 1; i < l; i++)
    {
        cin >> element;
        if (element == current_element)
        {
            current_freq++;
        }
        else
        {
            mp2[current_element] = max(current_freq, mp2[current_element]);
            current_element = element;
            current_freq = 1;
        }
    }
    mp2[current_element] = max(current_freq, mp2[current_element]); 
    int answer = INT_MIN;
    for (auto kv : mp1)
    {
        answer = max(answer, (kv.second + mp2[kv.first]));
    }
    for (auto kv : mp2)
    {
        answer = max(answer, (kv.second + mp1[kv.first]));
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