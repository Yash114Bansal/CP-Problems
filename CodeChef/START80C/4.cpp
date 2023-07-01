#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    if(n&1){
        cout << -1 << endl;
        return;
    }
    int array[n];
    for (int i = 0; i < n; i++)
    {
        array[i] = i+1; 
    }

    for (int i = 0; i < n-1; i+=2)
    {
        swap(array[i],array[i+1]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    
    
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
