#include <iostream>
using namespace std;
int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
    int base = 1;
    int temp = num;

    while (temp)
    {
        int last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;
        base = base * 2;
    }

    return dec_value;
}
int formula(int x, int y)
{
    return x ^ (x / (1 << y));
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int l, bin;
        cin >> l >> bin;
        int x = binaryToDecimal(bin);
        int max = INT32_MAX;
        int result = 0;
        for (int y = 1; y < l + 1; y++)
        {
            int temp = formula(x, y);
            if (temp < max)
            {
                // cout << temp<<' '<<x;
                max = temp;
                result = y;
            }
        }
        cout << result << endl;
    }
    return 0;
}