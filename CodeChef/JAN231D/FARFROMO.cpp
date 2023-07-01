#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int X1,Y1,X2,Y2;
        cin >> X1 >> Y1 >> X2 >> Y2;
        float alex_distance = sqrt((X1*X1 + Y1*Y1));
        float bob_distance = sqrt((X2*X2 + Y2*Y2));
        if(alex_distance > bob_distance){
            cout << "ALEX" << endl;
        }
        else if(alex_distance < bob_distance){
            cout << "BOB" << endl;
        }
        else{
            cout << "EQUAL" << endl;
        }
    }
    return 0;
}