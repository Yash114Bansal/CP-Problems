#include <iostream>
using namespace std;

int no_of_trailing_zeroes(int product_of_digits)
{

    
    int no_of_trailing_zero = 0;

    while (product_of_digits % 10 == 0)
    {
        no_of_trailing_zero++;
        product_of_digits = product_of_digits / 10;
    }
    return no_of_trailing_zero;
}

int main()
{
    int start, end;

    cin >> start >> end;
    
    int total = 0;
    for (int i = start + 1; i <= end; i++)
    {
        // total += no_of_trailing_zeroes(i);
        int product_of_digits = 1;
        int no_of_trailing_zero = 0;
        int num=i;
        bool send=false;
        while (num > 0)
        {
            int m = num % 10;
            product_of_digits = product_of_digits * m;
            if(m==5 || m==0){
                send = true;
            }
            num = num / 10;
        }
        if(!product_of_digits){
            total++;
        }
        else{
            if(send){
                total+=no_of_trailing_zeroes(product_of_digits);
            }
        }

    }

    cout << total << endl;

    return 0;
}
//