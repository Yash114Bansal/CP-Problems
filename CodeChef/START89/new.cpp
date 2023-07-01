#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int, int>
const ll MOD = 1e9 + 7;

void solve()
{
    string s;
    cin >> s;
    bool deleted = false;
    int start = 0;
    int end = s.length() - 1;
    while (end >= 0 && start < s.length())
    {
        //Debugging
        // char st = s[start];
        // char ed = s[end];
        if (s[start] != s[end])
        {
            if (deleted)
            {
                cout << "NO" << endl;
                return;
            }
            if (s[start + 1] == s[end])
            {
                s.erase(start, 1);
                deleted = true;
                start --;
            }
            else if (s[start] == s[end - 1])
            {
                s.erase(end, 1);
                deleted = true;
                end --;
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }

        start++;
        end--;
    }
    cout << "YES" << endl;
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