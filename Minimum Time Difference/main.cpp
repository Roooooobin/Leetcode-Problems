#include <bits/stdc++.h>
using namespace std;

int time_to_minute(string time){
    int minutes = (time[0]-'0') * 600 + (time[1]-'0') * 60 + (time[3]-'0') * 10 + (time[4]-'0');
    return minutes;
}

int findMinDifference(vector<string>& timePoints) {
    vector<int> minutes;
    for(int i=0; i<timePoints.size(); i++) {
        minutes.emplace_back(time_to_minute(timePoints[i]));
        minutes.emplace_back(time_to_minute(timePoints[i])+1440);
    }
    sort(minutes.begin(), minutes.end());
    int min_ = 1440;
    for(int i=1; i<minutes.size(); i++){
        min_ = min(min_, minutes[i]-minutes[i-1]);
    }
    return min_;
}

int main() {
//    vector<string> timePoints = {"08:00", "23:23", "10:23", "10:10"};
    vector<string> timePoints = {"05:31","22:08","00:35"};
    cout << findMinDifference(timePoints);
    return 0;
}