#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int, int>
const ll MOD = 1e9 + 7;
#define int long long

int msb(int num)
{
    return floor(log2(num));
}

int return_or(int len,vi stack,int current_num,int msb_element,int x){
    for (int i = 0; i < len; i++)
    {
        int element = stack[i];
        if (element == 0)
        {
            continue;
        }
        if (msb(element) > msb_element)
        {
            break;
        }
        if ((element & x) == element)
        {
            current_num |= element;
        }
        else
        {
            break;
        }
    }
    return current_num;
}

void solve()
{
    int len, x;
    cin >> len >> x;
    int msb_element = msb(x);
    vi stack1(len);
    vi stack2(len);
    vi stack3(len);
    for (int i = 0; i < len; i++)
    {
        cin >> stack1[i];
    }
    for (int i = 0; i < len; i++)
    {
        cin >> stack2[i];
    }
    for (int i = 0; i < len; i++)
    {
        cin >> stack3[i];
    }

    int current_num = 0;
    current_num = return_or(len,stack1,current_num,msb_element,x);
    current_num = return_or(len,stack2,current_num,msb_element,x);
    current_num = return_or(len,stack3,current_num,msb_element,x);


    if (current_num == x)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

signed main()
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
