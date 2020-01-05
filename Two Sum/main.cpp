#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

//vector<int> twoSum(vector<int>& nums, int target) {
//    vector<int> ret;
//    for(int i=0; i<nums.size()-1; i++){
//        for(int j=i+1; j<nums.size(); j++){
//            if(nums[i] + nums[j] == target){
//                ret.push_back(i);
//                ret.push_back(j);
//                break;
//            }
//        }
//    }
//    return ret;
//}

vector<int> twoSum(vector<int>& nums, int target)
{
    unordered_map<int, int> tble;
    vector<int> ret;
    for(int i=0; i<nums.size(); i++){
        if(tble.count(target-nums[i])){
            ret.push_back(tble[target-nums[i]]);
            ret.push_back(i);
            break;
        }
        tble[nums[i]] = i;
    }
    return ret;
}

int main()
{

    return 0;
}
