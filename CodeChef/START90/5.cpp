/*  C++ code to generate all possible subsequences.
    Time Complexity O(n * 2^n) */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int, int>
const ll MOD = 1e9 + 7;

void solve(int arr[], int n)
{
    ll counter_real = 0;
    unsigned int opsize = pow(2, n);
    for (int counter = 1; counter < opsize; counter++)
    {
        vector<int> get;
        for (int j = 0; j < n; j++)
        {
            if (counter & (1 << j))
                get.push_back(arr[j]);
        }
        sort(get.begin(), get.end());
        for (int i = 0; i < get.size(); i++)
        {
            if (i == get[i] - 1)
            {
                counter_real++;
                counter_real %= MOD;
            }
        }
    }
    cout << counter_real << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int l;
        cin >> l;
        int arr[l];
        for (int i = 0; i < l; i++)
        {
            cin >> arr[i];
        }

        solve(arr, l);
    }

    return 0;
}