#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>> T;
    while (T--)
    {
        int num;
        int answer = 1;
        int count = 0;
        cin >> num;
        for (int i = 2; i < num; i++)
        {
            if(num % i == 0){
                count ++;

            }
        }
        
    }
    
    return 0;
}