#include <bits/stdc++.h>
using namespace std;

int countSubsequences(int arr[], int n)
{

    unordered_map<int, int> freq;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
        count += freq[arr[i]] - 1;
    }
    if (freq.size() == 1)
        count /= 2;
    return count;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << countSubsequences(arr, n) << endl; // output: 6
    }

    return 0;
}
