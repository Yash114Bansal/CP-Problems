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
    sort(array.begin(), array.end());
    int current_xor = array[0];
    int box = 1;
    for (int i = 1; i < array.size(); i++)
    {
        if(current_xor < array[i]){
            current_xor^= array[i];
        }else{
            box++;
            current_xor = array[i];
        }
    }
    cout << box << endl;
    
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