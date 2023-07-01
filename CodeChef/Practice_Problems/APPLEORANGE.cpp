#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, answer;
        cin >> a >> b;

        int maxx = min(a,b);
        for (int i = 1; i < maxx+1; i++)
        {
            if(a%i == 0 && b%i ==0){
                answer = i;
            }
        }
        cout << answer << endl;
    }

    return 0;
}