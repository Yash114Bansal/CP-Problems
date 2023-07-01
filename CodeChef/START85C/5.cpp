#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // vector<vector<int>> a(2,vector<int>(3));
    // for(auto i:a){
    //     for(auto j:i){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    vector<int> yash(6);
    for (int i = 0; i < 6; i++)
    {
        cin >> yash[i];
    }
    for (int i = 0; i < 6; i++)
    {
        cout << yash[i];
    }
    
    
    return 0;
}