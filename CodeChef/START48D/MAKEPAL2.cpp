#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string s)
{
    string s2 = s;
    reverse(s.begin(), s.end());
    if (s == s2)
        return 1;
    return 0;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int length;
        cin >> length;
        string s,answer;
        cin >> s;
        int max_length = 1;
        if(is_palindrome(s)) cout << s;
        for (int i = 0; i < s.size() - 2; i++)
        {
            for (int j = i + 1; j < s.size(); j++)
            {
                string substring = s.substr(i,j);
                if(is_palindrome(substring)){
                    if(max_length<substring.length())
                    answer = substring;
                }
            }
        }
        cout << answer << endl;
    }

    return 0;
}