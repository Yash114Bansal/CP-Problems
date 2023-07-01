#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int a;
        cin >> a;
        if(a<3){
            cout << "LIGHT" << endl;
        }
        else if (a>=3 && a < 7){
            cout << "MODERATE" << endl;
        }
        else {
            cout << "HEAVY" << endl;
        }
    }
    return 0;
}