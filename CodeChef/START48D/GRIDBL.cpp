#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int x, y;
        int total = 0;
        cin >> x >> y;
        total += (x % 2) * y;
        total += (y % 2) * x;
        if(x%2 &&  y%2){
            total--;
        }
        cout << total << endl;
    }

    return 0;
}