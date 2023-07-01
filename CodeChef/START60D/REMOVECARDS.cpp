#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // Approach : Find Maximum Repeating element; return subtracting it from total
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int size;
        cin >> size;
        int array[size];
        for (int k = 0; k < size; k++)
        {
            cin >> array[k];
        }
        sort(array, array + size);
        int max_freq = 0;
        int current = array[0];
        int current_freq = 1;
        for (int l = 1; l < size; l++)
        {
            if (array[l] == current)
            {
                current_freq++;
            }
            else
            {
                current = array[l];
                current_freq = 1;
            }
            max_freq = max(max_freq, current_freq);
        }
        cout << size - max_freq << endl;
    }

    return 0;
}