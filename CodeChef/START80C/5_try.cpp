#include <bits/stdc++.h>
using namespace std;

int count(int n)
{
    if(n == 0)
        return 1;
    if(n == 1)
        return 1;
    else
        return (n * count(n - 1)) +
                        ((n - 1) * count(n - 2));
}
int main()
{
    cout << count(2);
    return 0;
}