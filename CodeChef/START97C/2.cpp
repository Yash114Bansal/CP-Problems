#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int, int>
const ll MOD = 1e9 + 7;

string encrypt(string text, int s)
{
    string result = "";

    for (int i = 0; i < text.length(); i++)
    {
        if (isupper(text[i]))
            result += char(int(text[i] + s - 65) % 26 + 65);
        else
            result += char(int(text[i] + s - 97) % 26 + 97);
    }
    return result;
}
int find_rotation(string s1, string s2)
{
    char c1 = s1[0];
    char c2 = s2[0];
    int check = c2 - c1;
    if (c2 - c1 < 0)
    {
        check = 26 - check;
    }
    return check;
}

void solve()
{
    int len;
    cin >> len;
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int rot =  find_rotation(s1, s2);
    cout << encrypt(s3,rot) << endl;;
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