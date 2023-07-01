#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define umi unordered_map<int ,int>
const ll MOD = 1e9+7;

void solve(){
    int total_days;
    cin >> total_days;
    vector<vi> days;
    for (int i = 0; i < total_days; i++)
    {
        int num;
        cin >> num;
        vi temp(num);
        for (int j = 0; j < num; j++)
        {
            cin >> temp[j];
        }
        days.push_back(temp);
        
    }
    
    reverse(days.begin(),days.end());

    unordered_map<int,bool> mp;
    vi answer;
    for (int i = 0; i < total_days; i++)
    {
        bool day_found = false;
        for (int j = 0; j < days[i].size(); j++)
        {
            int current_value = days[i][j];
            if(day_found){
                mp[current_value] = true;
            }
            if(!mp[current_value]){
                answer.push_back(current_value);
                mp[current_value] = true;
                day_found = true;
            }
        }
        if(!day_found){
            cout << -1 << endl;
            return;
        }

    }
    
    reverse(answer.begin(),answer.end());
    for(auto i:answer){
        cout << i << " ";
    }
    cout << endl;
    
    // for (int i = 0; i < total_days; i++)
    // {
        // for (int j = 0; j < days[i].size(); j++)
        // {
        //     cout << days[i][j] << " ";
        // }
    //     cout << endl;
    // }
    
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