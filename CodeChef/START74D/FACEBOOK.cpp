#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int len;
    cin >> len;
    int likes[len];
    int comments[len];
    for (int i = 0; i < len; i++)
    {
        cin >> likes[i];
    }
    for (int i = 0; i < len; i++)
    {
        cin >> comments[i];
    }
    
    int max_likes = 0;
    int max_likes_index = -1;
    for (int i = 0; i < len; i++)
    {
        if (likes[i] > max_likes)
        {
            max_likes = likes[i];
            max_likes_index = i + 1;
        }
        else if (likes[i] == max_likes)
        {
            if (comments[i] > comments[max_likes_index - 1])
            {
                max_likes_index = i+1;
            }
        }
    }
    cout << max_likes_index << endl;
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