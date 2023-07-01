#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    sort(array,array+size);
    int count = 0;
    int current = array[0];
    for (int i = 1; i < size; i++)
    {
        if(array[i] == current){
            count ++;
        }
        else{
            current = array[i];
        }
    }
    if(count&1){
        cout << size-count -1 << endl;
    }
    else{
        cout << size -count << endl;
    }

    return 0;
}