#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int no_of_trainers;
        cin >> no_of_trainers;
        int ground[no_of_trainers], water[no_of_trainers], points[no_of_trainers];

        for (int i = 0; i < no_of_trainers; i++)
        {
            points[i] = 0;
            cin >> ground[i];
        }
        for (int i = 0; i < no_of_trainers; i++)
        {
            cin >> water[i];
        }
        for (int i = 0; i < no_of_trainers - 1; i++)
        {
            for (int j = i + 1; j < no_of_trainers; j++)
            {
                if (ground[i] > ground[j])
                {
                    points[i]++;
                    if (water[i] < water[j])
                    {
                        points[j]++;
                    }
                }
                else
                {
                    points[j]++;
                    if (water[i] > water[j])
                    {
                        points[i]++;
                    }
                }
            }
        }
        int p = sizeof(points) / sizeof(points[0]);
        int max = 0;
        int total_qualify = 0;
        for (int i = 0; i < no_of_trainers; i++)
        {
            if (points[i] == max)
            {
                total_qualify++;
            }
            else if (points[i] > max)
            {
                max = points[i];
                total_qualify = 1;
            }
        }
        cout << total_qualify << endl;
    }

    return 0;
}