#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int a,b,x;
        cin >> a >> b>> x;
        if((a-b)%x != 0){
            cout << abs(a-b)/x+1 << endl;
            continue;
        }
        cout <<abs(a-b)/x << endl;

    }
    return 0;
}