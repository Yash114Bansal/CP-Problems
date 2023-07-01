#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int days;
        cin >> days;
        int Chef_snaps[days];
        int Chefina_snaps[days];
        for (int i = 0; i < days; i++)
        {
            cin >> Chef_snaps[i];
        }
        for (int i = 0; i < days; i++)
        {
            cin >> Chefina_snaps[i];
        }
        int max_streak = 0;
        int streak = 0;
        for (int i = 0; i < days; i++)
        {
            if (Chef_snaps[i] == 0 || Chefina_snaps[i] == 0)
            {
                streak = 0;
                continue;
            }
            streak++;
            max_streak = max(max_streak,streak);
        }
        cout << max_streak << endl;
    }

    return 0;
}