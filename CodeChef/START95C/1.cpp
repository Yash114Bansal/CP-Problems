#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int, int>
const ll MOD = 1e9 + 7;

bool check_donate(string d, string r)
{
    if (d == "A" && (r == "A" || r == "AB"))
        return true;
    if (d == "B" && (r == "B" || r == "AB"))
        return true;
    if (d == "AB" && r == "AB")
        return true;
    if (d == "O")
        return true;
    return false;
}

void solve()
{
    int countA = 0;
    int countB = 0;
    int countAB = 0;
    int countO = 0;

    

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string c;
        cin >> c;
        if (c == "A"){
            countA++;
        }
        if (c == "B"){
            countB++;
        }
        if (c == "AB"){
            countAB++;
        }
        if (c == "O"){
            countO++;
        }
    }
    int count_chain = countO;
    if(countA > countB){
        count_chain += countA;
        count_chain += countAB;
    }
    if(countB >= countA){
        count_chain += countB;
        count_chain += countAB;
    }
    cout << count_chain << endl;
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