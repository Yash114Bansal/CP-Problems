#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define umi unordered_map<int, int>
const int MOD = 1e9 + 7;

void print(vi array)
{
    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void solve()
{
    int len;
    cin >> len;
    string s;
    cin >> s;
    int prev = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'L')
        {
            prev += i;
        }
        else
        {
            prev += len - i - 1;
        }
    }
    vi answer;
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] == 'L')
        {
            prev += len - i -i -1;
            answer.push_back(prev);
        }
        if (s[len - i - 1] == 'R')
        {
            prev += len - i -i -1;
            answer.push_back(prev);
        }
    }
    for (int i = answer.size(); i < len; i++)
    {
        answer.push_back(prev);
    }
    
    if(!answer.size()){
        cout << 0 << endl;
        return;
    }
    print(answer);
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