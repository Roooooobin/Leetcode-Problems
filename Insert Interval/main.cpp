#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

//class Solution {
//public:
//
//    struct NUM
//    {
//        int val;
//        int type;
//        NUM(int x, int y): val(x), type(y){}
//        bool operator < (const NUM& ano) const
//        {
//            if(val == ano.val){
//                return type < ano.type;
//            }
//            else return val < ano.val;
//        }
//    };
//    vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
//        vector<NUM> nums;
//        for(Interval interval: intervals){
//            nums.push_back({interval.start, -1});
//            nums.push_back({interval.end, 1});
//        }
//        nums.push_back({newInterval.start, -1});
//        nums.push_back({newInterval.end, 1});
//        sort(nums.begin(), nums.end());
////        for(auto x: nums){
////            cout << x.val << ' ' << x.type << endl;
////        }
//        vector<Interval> ans;
//        int i = 0;
//        int sum = 0;
//        int st, ed;
//        int n = nums.size();
//        while(i < n){
//            if(nums[i].type == -1){
//                if(sum == 0) st = nums[i].val;
//                sum += -1;
//            }
//            else{
//                sum += 1;
//                if(sum == 0){
//                    ed = nums[i].val;
//                    ans.push_back({st, ed});
//                }
//            }
//            i++;
//        }
//        return ans;
//    }
//};

class Solution {
public:
     vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        int index = 0;
        while(index < intervals.size() && intervals[index][1] < newInterval[0]){
            ans.push_back({intervals[index][0], intervals[index++][1]});
        }
        while(index < intervals.size() && intervals[index][0] <= newInterval[1]){
            newInterval[0] = min(newInterval[0], intervals[index][0]);
            newInterval[1] = max(newInterval[1], intervals[index][1]);
            index++;
        }
        ans.push_back({newInterval[0], newInterval[1]});
        while(index < intervals.size()){
            ans.push_back({intervals[index][0], intervals[index++][1]});
        }
        return ans;
    }
};


int main()
{
    vector<vector<int>> intervals = {{1, 2}, {3, 5}, {6, 7}, {8, 10}, {12, 16}};
    VI in = {4, 8};
    Solution S;

    for(auto x: S.insert(intervals, in)){
        cout << x[0] << ' ' << x[1] << endl;
    }
    return 0;
}
