#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int length;
    cin >> length;

    string binary;
    cin >> binary;
    int number_of_useable_two = 3;
    int num = 0;
    int count_1 = 0;
    int count_0 = 0;
    if (binary[length - 1] == '1')
    {
        number_of_useable_two--;
    }

    for (int i = 0; i < length; i++)
    {
        if (binary[i] == '1')
        {
            // count_1++;
            num = num | 1 << (length - i - 1);
        }
    }


    int number_of_useable_two_again = number_of_useable_two;

    number_of_useable_two--;
    number_of_useable_two_again -= 2;
    num = num;
    // for (int i = 0; i < length; i++)
    // {
    //     if (binary[i] == '1')
    //     {
    //         count_1++;
    //         num = num | 1 << (length - i - 1);
    //     }
    // }

    string next_susbs = binary.substr(1,length-1); 

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