#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int answer = (a - c) / b;
    if(answer*b < a-c){
        answer ++;
    }
    cout << answer + 1 << endl;
}

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
