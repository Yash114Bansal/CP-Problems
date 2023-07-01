#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int A, B, C, D;
    cout << "Enter the values of A, B, C, and D: ";
    cin >> A >> B >> C >> D;
    int k = ceil(-1 * A % B / D);
    int X = B * A + (-1 * k * D - C % B) % B;
    cout << "X = " << X << endl;
    return 0;
}
