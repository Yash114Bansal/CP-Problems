#include <iostream>
#include <vector>

using namespace std;

int max_swaps(vector<vector<char>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    int total_swaps = 0;

    while (true) {
        int swaps = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n - 1; j++) {
                char a = grid[i][j], b = grid[i][j+1];
                if ((a == 'R' && b == 'L') || (a == 'D' && b == 'U')) {
                    grid[i][j] = b;
                    grid[i][j+1] = a;
                    swaps++;
                }
            }
        }
        for (int i = m - 1; i > 0; i--) {
            for (int j = n - 1; j > 0; j--) {
                char a = grid[i][j], b = grid[i-1][j];
                if ((a == 'L' && b == 'R') || (a == 'U' && b == 'D')) {
                    grid[i][j] = b;
                    grid[i-1][j] = a;
                    swaps++;
                }
            }
        }
        if (swaps == 0) {
            break;
        }
        total_swaps += swaps;
    }

    return total_swaps;
}

int main() {
    int m,n;
    cin >> m >> n;
    vector<vector<char>> grid;
    for (int i = 0; i < m; i++)
    {
        for (int i = 0; i < n; i++)
        {
            char k;
            cin >> k;
            grid[i].push_back(k);
        }
        
    }
    
    cout << max_swaps(grid) << endl; // output: 5

    return 0;
}
