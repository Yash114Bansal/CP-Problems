#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // string str = "eijk"
    string str;
    cin >> str;
    int operations = 0;
    sort(str.begin(), str.end()); // sort the characters in ascending order
    for (int i = 1; i < str.length(); i++) {
        int diff = str[i] - str[i-1]; // calculate the difference between consecutive characters
        if (diff > 1) { // if the characters are not consecutive
            operations += diff - 1; // add the number of operations required to make them consecutive
            str.insert(i, diff-1, str[i-1]+1); // perform the required operations
        }
    }
    cout << operations << endl; // Output: 6
    cout << str << endl; // Output: abcde
    return 0;
}
