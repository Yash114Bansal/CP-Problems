#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    int answer = 0;
    unordered_map<int,int> mp;
    for (int i = 0; i < b; i++)
    {
        int p, q;
        cin >> p >> q;
        answer += q + mp[p];
        cout << answer << endl;;
        mp[p]+=q;
    }
}

int main()
{

    solve();
    return 0;
}