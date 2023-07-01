#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int, int>
const ll MOD = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    if (n == 1 || n == 2)
    {
        cout << 0 << endl;
        return;
    }
    int answer = 0;
    int odd = n / 2;
    if (odd * 2 < n)
    {
        odd++;
    }
    odd--;
    answer += odd;
    int even = n / 2;
    answer += 2;
    even -= 2;
    answer += even * 2;
    if (n & 1)
    {
        answer++;
    }
    cout << answer << endl;
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