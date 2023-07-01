#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

map<int, int> findFrequency(const vector<string>& ranges) {
    map<int, int> frequencyMap;
    int minNum = INT8_MAX;
    int maxNum = INT8_MIN;

    for (const string& rangeStr : ranges) {
        int start, end;
        sscanf(rangeStr.c_str(), "%d:%d", &start, &end);
        
        frequencyMap[start]++;
        frequencyMap[end + 1]--;
        
        minNum = min(minNum, start);
        maxNum = max(maxNum, end);
    }
    
    int cumulativeSum = 0;
    for (auto& pair : frequencyMap) {
        cumulativeSum += pair.second;
        pair.second = cumulativeSum;
    }

    for (int num = minNum + 1; num <= maxNum; ++num) {
        if (frequencyMap.find(num) == frequencyMap.end()) {
            frequencyMap[num] = frequencyMap[num - 1];
        }
    }
    
    return frequencyMap;
}

int main() {
    vector<string> ranges = {"1:4", "1:8","2:9"};
    map<int, int> frequencyMap = findFrequency(ranges);
    
    for (const auto& pair : frequencyMap) {
        cout << "Number: " << pair.first << ", Frequency: " << pair.second << endl;
    }
    
    return 0;
}
