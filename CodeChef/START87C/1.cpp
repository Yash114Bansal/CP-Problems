#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a;
    cin >> a;
    int t = a%10;
    if(t<5){
        a-=t;
    }else{
        a+=(10-t);
    }
    cout << 100-a << endl;
    
}

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	solve();
	}
	return 0;
}
