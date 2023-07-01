#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int, int>
const ll p = 1e9 + 7;

unsigned ll power(unsigned ll x, int y)
{
    unsigned ll res = 1; // Initialize result

    x = x % p; // Update x if it is more than or
    // equal to p

    while (y > 0)
    {

        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;

        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}

// Returns n^(-1) mod p
unsigned ll modInverse(unsigned ll n)
{
    return power(n, p - 2);
}
unsigned ll mul(unsigned ll x,
                unsigned ll y)
{
    return x * 1ull * y % p;
}
unsigned ll divide(unsigned ll x,
                   unsigned ll y)
{
    return mul(x, modInverse(y));
}
// Returns nCr % p using Fermat's little
// theorem.
unsigned ll nCrModPFermat(unsigned ll n,
                          int r)
{
    // If n<r, then nCr should return 0
    if (n < r)
        return 0;
    // Base case
    if (r == 0)
        return 1;
    // if n-r is less calculate nCn-r
    if (n - r < r)
        return nCrModPFermat(n, n - r, p);

    // Fill factorial array so that we
    // can find all factorial of r, n
    // and n-r
    unsigned ll res = 1;
    // keep multiplying numerator terms and dividing denominator terms in res
    for (int i = r; i >= 1; i--)
        res = divide(mul(res, n - i + 1, p), i, p);
    return res;
}

void solve()
{
    // int len;
    // cin >> len;
    // int odd_count = 0;
    // int even_count = 0;
    // for (int i = 0; i < len; i++)
    // {
    //     int temp;
    //     cin >> temp;
    //     if (temp & 1)
    //     {
    //         odd_count++;
    //     }
    //     else
    //     {
    //         even_count++;
    //     }
    // }
    // ll answer = 1 << even_count;

    // int count = 2;
    // while (count <= odd_count)
    // {
    //     answer +=
    // }

    // cout << answer << endl;

    cout << nCrModPFermat()
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