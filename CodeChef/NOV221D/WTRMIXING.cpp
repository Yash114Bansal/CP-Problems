#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int Current, Required, Hot, Cold;
        cin >> Current >> Required >> Hot >> Cold;
        int temp = Current - Required;
        if (temp > 0)
        {
            if (temp <= Cold)
            {
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
            
        }
        else if (temp < 0)
        {
            if (-temp <= Hot)
            {
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else{
            cout << "YES" << endl;
        }
        
    }

    return 0;
}