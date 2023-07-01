#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int, int>
const ll MOD = 1e9 + 7;

void solve()
{
    int len, up, down;
    cin >> len >> up >> down;
    string s;
    cin >> s;
    for (int i = 0; i < len; i++)
    {
        char start = s[i];
        int up_operations = 'z' - start + 1;
        int down_operations = start - 'a';
        if (up_operations < down_operations)
        {
            if (up >= up_operations)
            {
                start = 'a';
                up = up - up_operations;
            }
        }
        else
        {
            {
                if (down_operations <= down)
                {
                    down = down - down_operations;
                    start = 'a';
                }
                else
                {
                    start -= down;
                    down = 0;
                }
            }
        }
        s[i] = start;
    }
    cout << s << endl;
}

int main()
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