#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int t = 0; t < n; t++)
    {
        int N, P;
        cin >> N >> P;
        int Solver[N];
        for (int i = 0; i < N; i++)
        {
            cin >> Solver[i];
        }
        int hard = 0;
        int cakewalk = 0;
        for (int i = 0; i < N; i++)
        {
            int sol = Solver[i];
            if (sol >= P / 2)
            {
                cakewalk++;
            }
            else if (sol <= P / 10)
            {
                hard++;
            }
        }
        if (cakewalk == 1 &&hard == 2)
        {
            cout << "yes" << endl;
        }
        else{
            cout << "no" <<  endl;
        }
    }

    return 0;
}