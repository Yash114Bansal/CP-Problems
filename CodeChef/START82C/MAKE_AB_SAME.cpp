#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int, int>
const ll MOD = 1e9 + 7;

void solve()
{
    int len;
    cin >> len;
    vi a1(len);
    vi a2(len);
    for (int i = 0; i < len; i++)
    {
        cin >> a1[i];
    }
    for (int i = 0; i < len; i++)
    {
        cin >> a2[i];
    }
    if (a1[len - 1] == 0 && a2[len - 1] == 1)
    {
        cout << "NO" << endl;
        return;
    }
    if (a1[0] == 0 && a2[0] == 1)
    {
        cout << "NO" << endl;
        return;
    }
    for (int i = 0; i < len; i++)
    {
        if (a1[i] == 1 && a2[i] == 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    bool no_of_one = false;
    for (int i = 0; i < len; i++)
    {
        if (a1[i])
        {
            no_of_one = true;
            break;
        }
    }
    bool no_of_one2 = false;
    for (int i = 0; i < len; i++)
    {
        if (a2[i])
        {
            no_of_one2 = true;
            break;
        }
    }
    if (!no_of_one && no_of_one2)
    {
        cout << "NO" << endl;
        return;
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