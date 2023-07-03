// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define vi vector<int>
// #define umi unordered_map<int, int>
// const int MOD = 1e9 + 7;

// void solve()
// {
//     int len, n;
//     cin >> len >> n;
//     vi array(len);
//     for (int i = 0; i < len; i++)
//     {
//         cin >> array[i];
//     }
//     sort(array.begin(), array.end());
//     int first = 0, second = 1, last = array.size() - 1;
//     for (int i = 0; i < n; i++)
//     {
//         if ((array[first] + array[second]) <= array[last])
//         {
//             array[first] = 0;
//             array[second] = 0;
//             first += 2;
//             second += 2;
//         }
//         else
//         {
//             array[last] = 0;
//             last--;
//         }
//     }
//     int sum = 0;
//     for(auto i:array){
//         sum+=i;
//     }
//     cout << sum << endl;
// }

// signed main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         solve();
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define umi unordered_map<int, int>
const int MOD = 1e9 + 7;
/*
15 22 12 10 13 11

2 attempts

10 11 12 13 15 22
-----------

10 21 33 46 61 83
// 83 - 46 = 37
// 61 - 21 = 40
// 46 - 0 = 46

*/

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
    vi prefex_sum(len, 0);
    prefex_sum[0] = array[0];
    for (int i = 1; i < len; i++)
    {
        prefex_sum[i] = array[i] + prefex_sum[i - 1];
    }
    int first_pointer = 2 * n - 1;
    int last_pointer = len - 1;
    int answer = INT_MIN;
    while (first_pointer >= 0)
    {
        answer = max(answer, prefex_sum[last_pointer] - prefex_sum[first_pointer]);
        last_pointer--;
        first_pointer -= 2;
    }
    cout << max(answer, prefex_sum[last_pointer]) << endl;
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