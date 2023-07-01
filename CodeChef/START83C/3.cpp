#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int ,int>
const ll MOD = 1e9+7;

int max_bitwise_xor(int a, int b, int c) {
    int x = 0;
    for (int i = 31; i >= 0; i--) {
        int bit_a = (a >> i) & 1;
        int bit_b = (b >> i) & 1;
        int bit_c = (c >> i) & 1;
        if (bit_b == 0 && bit_c == 1) {
            x |= (1 << i);
        } else if (bit_b == 1 && bit_c == 0) {
            break;
        }
    }
    return x;
}

void solve(){

    cout << max_bitwise_xor(13,12,1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}