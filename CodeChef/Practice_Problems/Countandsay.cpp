#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int, int>
const ll MOD = 1e9 + 7;

/*
4 
count(1) = 1
count(2) = 11
count (3) = 21
count(4) = 1211
count(5) = 111221
count(6) = 312211
*/

string give_ulti_value(string number)
{
    char current_char = number[0];
    int current_count = 1;
    string to_return = "";

    for (int i = 1; i < number.size(); i++)
    {
        if (current_char == number[i])
        {
            current_count++;
        }
        else
        {
            to_return += to_string(current_count);
            to_return += current_char;
            current_char = number[i];
            current_count = 1;
        }
    }
    to_return += to_string(current_count);
    to_return += current_char;
    return to_return;

}

void solve()
{
    int num;
    cin >> num;
    string heheh = "1";
    num--;
    while (num--)
    {
        heheh = give_ulti_value(heheh);
    }
    cout << heheh << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}