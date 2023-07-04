#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define umi unordered_map<int, int>
const int MOD = 1e9 + 7;

void solve()
{
    int len;
    cin >> len;
    vi arr1(len);
    vi arr2(len);
    for (int i = 0; i < len; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < len; i++)
    {
        cin >> arr2[i];
    }
    int first_pointer = 0;
    int last_pointer = len - 1;
    for (int i = 0; i < len; i++)
    {
        if (arr1[i] == arr2[i])
        {
            first_pointer++;
        }
        else
        {
            break;
        }
    }
    for (int i = len - 1; i >= 0; i--)
    {
        if (arr1[i] == arr2[i])
        {
            last_pointer--;
        }
        else
        {
            break;
        }
    }
    // cout << first_pointer+1 << " " << last_pointer+1 << "  ";
    for (int i = first_pointer-1; i >= 0; i--)
    {
        if (arr2[i] <= arr2[i + 1])
        {
            first_pointer--;
        }
        else
        {
            break;
        }
    }
    for (int i = last_pointer+1; i < len; i++)
    {
        if (arr2[i] >= arr2[i - 1])
        {
            last_pointer++;
        }
        else
        {
            break;
        }
    }
    cout << ++first_pointer << " " << ++last_pointer << endl;
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