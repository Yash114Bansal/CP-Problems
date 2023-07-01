#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int, int>
const ll MOD = 1e9 + 7;

bool isPowerOfTwo(ll n)
{
    if (n == 0)
        return false;
    return (ceil(log2(n)) == floor(log2(n)));
}

void solve()
{
    ll have, need;
    cin >> have >> need;
    if (need > have)
    {
        cout << "NO" << endl;
        return;
    }
    if (need == have || isPowerOfTwo(have))
    {
        cout << "YES" << endl;
        return;
    }
    ll count = 1;
    while (!(have & 1))
    {
        count *= 2;
        have = have / 2;
        if(need%have == 0 && count >= need/have){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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