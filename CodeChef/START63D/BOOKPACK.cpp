#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        int box = 0;
        for (int j = 0; j < X; j++)
        {
            if (Y%Z == 0)
            {
                box += Y/Z;
            }
            else{
                box += Y/Z;
                box ++;
            }
            
        }
        cout << box<< endl;
        
    }

    return 0;
}