#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

//int findDuplicate(vector<int>& nums) {
//    sort(nums.begin(), nums.end());
//    for(int i=1; i<nums.size(); i++){
//        if(nums[i] == nums[i-1]) return nums[i];
//    }
//    return -1;
//}

//int findDuplicate(vector<int>& nums)
//{
//    unordered_set<int> tble;
//    for(int i=0; i<nums.size(); i++){
//        if(tble.count(nums[i])){
//            return nums[i];
//        }
//        else{
//            tble.insert(nums[i]);
//        }
//    }
//    return -1;
//}

int findDuplicate(vector<int>& nums)
{
    int n = nums.size();
    for(int i=0; i<n; i++){
        while(nums[i]-1 != i){
            if(nums[i] == nums[nums[i]-1]){
                return nums[i];
            }
            else swap(nums[i], nums[nums[i]-1]);
        }
    }
    return -1;
}

int findDuplicate(vector<int>& nums)
{
    int tortoise = nums[0];
    int hare = nums[0];
    while(23){
        tortoise = nums[tortoise];
        hare = nums[nums[hare]];
        if(tortoise == hare) break;
    }
    tortoise = nums[0];
    while(tortoise != hare){
        tortoise = nums[tortoise];
        hare = nums[hare];
    }
    return tortoise;
}

int main()
{
    int a[] = {2, 1, 4, 3, 5, 4};
    VI nums(a, a+6);
    cout << findDuplicate(nums) << endl;
    return 0;
}
