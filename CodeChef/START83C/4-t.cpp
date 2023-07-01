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
    string word;
    cin >> word;
    for (int i = 0; i < len; i++)
    {
        char start = word[i];
        int up_operations = 'z' - start + 1;
        int down_operations = start - 'a';

        if (down_operations < up_operations)
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
        else
        {
            if (up >= up_operations)
            {
                start = 'a';
                up = up - up_operations;
            }
            else
            {
                if ('a' + down > start)
                {
                    int to_down = start - 'a';
                    down -= to_down;
                    start = 'a';
                }
                else if (up >= 'z' - start +1)
                {
                    start = 'a';
                    up-='z' - start +1;
                }
                else
                {
                    start -= down;
                    down = 0;
                }
            }
        }
        word[i] = start;
    }
    cout << word << endl;
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