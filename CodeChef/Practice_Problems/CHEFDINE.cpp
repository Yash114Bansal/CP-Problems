#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int N , K;
        cin >> N >> K;
        int array1[N];
        int array2[N];
        for (int i = 0; i < N; i++)
        {
            cin >> array1[i];
        }
        for (int i = 0; i < N; i++)
        {
            cin >> array2[i];
        }
        unordered_map<int,int> mapp;
        for (int i = 0; i < N; i++)
        {
            if(mapp.find(array1[i])!=mapp.end()){
                mapp[array1[i]] = min(mapp[array1[i]],array2[i]);
            }
            else{
            mapp[array1[i]] = array2[i];
            }
        }
        if(mapp.size()<K){
            cout << -1 << endl;
            continue;
        }
        vector<int> array;
        for(auto keaval:mapp){
            array.push_back(keaval.second);
        }
        sort(array.begin(),array.end());
        int answer = 0;
        for (int i = 0; i < K; i++)
        {
            answer += array[i];
        }
        cout << answer << endl;

    }
    return 0;
}