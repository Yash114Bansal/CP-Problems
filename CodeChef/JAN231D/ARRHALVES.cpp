#include <bits/stdc++.h>
using namespace std;

int max_index(vector<int> a, int start, int end)
{
    int maxx = INT_MIN;
    int to_ret = -1;
    for (int i = start; i < end+1; i++)
    {
        if(a[i]>maxx){
            to_ret = i;
        }
    }
    return to_ret;
    
}

void solve()
{
    int length;
    cin >> length;
    vector<int> array;
    for (int i = 0; i < length * 2; i++)
    {
        int temp;
        cin >> temp;
        array.push_back(temp);
    }
    cout << max_index()
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
