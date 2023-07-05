#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int, int>
const ll MOD = 1e9 + 7;

void solve()
{
    int l;
    cin >> l;
    string s;
    cin >> s;
    int first_pointer = -1;
    int second_pointer = -1;
    char currbracker = 0;
    int answer = 0;
    for (int i = 0; i < l; i++)
    {
        // :)):):(():
        if (s[i] == ':' && first_pointer == -1)
        {
            first_pointer=i;
            while (1)
            {
                i++;
                if(currbracker == 0 && (s[i] =='(' || s[i] == ')')){
                    currbracker = s[i];
                }
                if(s[i] == ':' && currbracker==0){
                    first_pointer = i;
                    break;
                }if(s[i] == '(' || s[i] == ')'){
                    if(s[i] == currbracker){
                        continue;
                    }
                }else{
                    break;
                }if(s[i] == ':'){
                    answer ++;
                    first_pointer = i;
                }
            }
            
        }
    }
    cout << answer << endl;
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