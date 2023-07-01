#include <bits/stdc++.h>
using namespace std;

int find_length(int number){
    int length = 0;
    while (number !=0)
    {
        length ++;
        number = number >> 1;
    }
    return length;
}

void solve(){
        int N,Y;
        cin >> N >> Y;
        int to_or;
        cin >> to_or;
        for (int i = 0; i < N-1; i++)
        {
            int temp;
            cin >> temp;
            to_or = to_or | temp;
        }

        int number = 1;
        int answer = 0;
        for(int i = 0; i<max(find_length(Y),find_length(to_or)) ; i++)
        {
            int right1 = to_or & number;
            int answer_right = Y & number;
            if(!(!right1 || answer_right)){
                cout << -1 << endl;
                return;
            }
            if(!right1 && answer_right){
                
                answer = answer | (1<<i);
            }
            number = number << 1;
            
        }
        cout << answer << endl;
}


int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}