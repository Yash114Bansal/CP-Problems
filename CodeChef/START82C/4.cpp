#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    int X = ((a % b - c % d) % b + d) % b;
    X = min(X, ((c % d - a % b) % d + b) % d);

    if (X < 0) {
        X += (b * d) / __gcd(b, d);
    }

    cout<< X << endl;

    return 0;
}