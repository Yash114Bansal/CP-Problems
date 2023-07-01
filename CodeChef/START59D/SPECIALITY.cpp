#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a > b && a > c)
        {
            cout << "Setter" << endl;
        }
        else if (b > c)
        {
            cout << "Tester" << endl;
        }
        else
        {
            cout << "Editorialist" << endl;
        }
    }

    return 0;
}