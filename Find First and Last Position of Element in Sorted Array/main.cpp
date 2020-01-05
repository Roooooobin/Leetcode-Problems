#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

//vector<int> searchRange(vector<int>& nums, int target) {
//    vector<int> ret;
//    int first = -1, last = -1;
//    first = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
//    last = upper_bound(nums.begin(), nums.end(), target) - nums.begin() - 1;
//    if(first == nums.size() || nums[first] != target){
//        ret.push_back(-1);
//        ret.push_back(-1);
//    }
//    else{
//        ret.push_back(first);
//        ret.push_back(last);
//    }
//    return ret;
//}

vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> ret;
    int l = 0, r = nums.size() - 1;
    while(l < r){
        int mid = (l + r) / 2;
        if(nums[mid] < target){
            l = mid + 1;
        }
        else{
            r = mid;
        }
    }
    if(nums.size() == 0 || nums[l] != target){
        ret.push_back(-1);
        ret.push_back(-1);
        return ret;
    }
    ret.push_back(l);
    l = 0, r = nums.size();
    while(l < r){
        int mid = (l + r) / 2;
        if(nums[mid] <= target){
            l = mid + 1;
        }
        else{
            r = mid;
        }
    }
    ret.push_back(l-1);
    return ret;
}

int main()
{
    VI l;
    l.push_back(-1);
    l.push_back(3);l.push_back(4);l.push_back(5);
    l.push_back(5);l.push_back(5);l.push_back(6);l.push_back(7);l.push_back(8);

    VI ll = searchRange(l, 5);
    for(auto x: ll){
        cout << x << endl;
    }
    return 0;
}
