#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int, int>
const ll MOD = 1e9 + 7;

void solve()
{
    int len;
    cin >> len;
    vi array(len);
    for (int i = 0; i < len; i++)
    {
        cin >> array[i];
    }
    int first_element = array[0];
    int last_element = array[0];
    cout << 1;
    bool check_me = false;
    for (int i = 1; i < len; i++)
    {
        if (check_me && (array[i] >= last_element && array[i] <= first_element))
        {
            cout << 1;
            last_element = array[i];
            continue;
        }
        else if (check_me)
        {
            cout << 0;
            continue;
        }

        if (array[i] >= last_element)
        {
            cout << 1;
        }
        else if (array[i] <= first_element)
        {
            check_me = true;
            cout << 1;
        }
        else
        {
            cout << 0;
            continue;
        }
        last_element = array[i];
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}