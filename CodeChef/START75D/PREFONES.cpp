#include<bits/stdc++.h>
using namespace std;

int number_of_consicutive_one(string s,int len){
    // // 11010101010
    // int start = 0;
    // int end = 1;
    // int m
    int size=len, count=0, maxCount=0, i;
    for (i = 0; i < size; ++i) {
        if (s[i] == '1') {
            ++count;        
        } else {
            count = 0;
        }
        if (count > maxCount) {
            maxCount = count;
        }
    }
    return maxCount;

}

void solve(){
    int length;
    cin >> length;
    string s;
    cin >> s;
    if(s[0] == '0'){
        cout << number_of_consicutive_one(s,length) << endl;
    }
    else{
        int count = 0;
        int i;
        for ( i = 0; i < length; i++)
        {
            if(s[i] == '0'){
                break;
            }
            count ++;
        }
        string subss = s.substr(i,length);
        cout << number_of_consicutive_one(subss,length-i)+count << endl;
        
    }
}

int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}