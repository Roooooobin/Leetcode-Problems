#include <bits/stdc++.h>
using namespace std;

// leetcode-253, lintcode-919
class Interval {
     int start, end;
     Interval(int start, int end) {
        this->start = start;
        this->end = end;
     }
}

int minMeetingRooms(vector<Interval> &intervals) {
    int n = intervals.size();
    vector<int> st(n, 0);
    vector<int> ed(n, 0);
    for(int i=0; i<n; i++){
        st[i] = intervals[i].start;
        ed[i] = intervals[i].end;
    }
    sort(st.begin(), st.end());
    sort(ed.begin(), ed.end());
    int i = 0, j = 0;
    int cur = 0;
    int max_ = 0;
    while(i < n && j < n){
        if(st[i] < ed[j]){
            i++;
            cur++;
        }
        else{
            j++;
            cur--;
        }
        max_ = max(cur, max_);
    }
    return max_;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
