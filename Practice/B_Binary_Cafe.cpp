#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int, int>
const ll MOD = 1e9 + 7;

void solve()
{
    int coins, dessert;
    cin >> coins >> dessert;
    int answer = 0;
    int current_number = 1;
    while (1 << current_number <= coins)
    {
        current_number++;
    }
    current_number--;
    if (coins + 1 >= (1 << dessert))
    {
        cout << (1 << dessert) << endl;
        return;
    }
    answer += 1 << current_number;

}
/*
    1 2 4 8 16 32 64 128 256

    60 = approx 2^5

    31

    1 2 4 8 16 -> 5 dessert
    coins = 2^5-1
    -----------------
    32 1
    32 2
    32

*/

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