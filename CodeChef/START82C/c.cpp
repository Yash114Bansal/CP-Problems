#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    // Create a 2D array to store the matrix
    int matrix[N][N];

    // Initialize the random number generator
    srand(time(NULL));

    // Generate random numbers between n and n^2
    int min_num = N;
    int max_num = N*N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrix[i][j] = rand() % (max_num - min_num + 1) + min_num;
        }
    }

    // Make sure the absolute difference between neighbouring elements is > 1
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i > 0 && abs(matrix[i][j] - matrix[i-1][j]) <= 1) {
                matrix[i][j] = matrix[i-1][j] + ((rand() % 2 == 0) ? 2 : -2);
            }
            if (j > 0 && abs(matrix[i][j] - matrix[i][j-1]) <= 1) {
                matrix[i][j] = matrix[i][j-1] + ((rand() % 2 == 0) ? 2 : -2);
            }
        }
    }

    // Print the matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
