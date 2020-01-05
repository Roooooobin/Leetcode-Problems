#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

//int jump(vector<int>& nums) {
//    if(nums.size() == 1) return 0;
//    int steps = nums[0];
//    int n = nums.size();
//    int i = 0;
//    int jumps = 1;
//    int max_place;
//    int max_index;
//    while(steps && i < n){
//        //cout << i << ' ' << steps << endl;
//        if(i + steps >= n-1) return jumps;
//        //current farest place and its index
//        max_place = i+steps;
//        max_index = i;
//        //i+j+nums[i+j] indicts the farest place this index can get
//        //if greater than the current then update
//        for(int j=1; j<=steps; j++){
//            if(max_place <= i+j+nums[i+j]){
//                max_index = i+j;
//                max_place = i+j+nums[i+j];
//            }
//        }
//        //update
//        jumps++;
//        steps = nums[max_index];
//        //if none of the indexes can get farther
//        if(max_index == i){
//            i = max_place;
//        }
//        //else update i := max_index, repeat
//        else{
//            i = max_index;
//        }
//    }
//    return jumps;
//}

int jump(vector<int>& nums)
{
    int jumps = 0, curEnd = 0, curFarthest = 0;
	for (int i = 0; i < nums.size() - 1; i++) {
        cout << curFarthest << ' ' << curEnd << endl;
		curFarthest = max(curFarthest, i + nums[i]);
		if (i == curEnd) {
			jumps++;
			curEnd = curFarthest;
		}
	}
	return jumps;
}

int main()
{
//    int a[] = {7, 1, 6, 7, 1, 1, 1, 3, 9, 0, 1, 2, 9, 0, 3};
    int a[] = {1, 1, 1, 1};
    VI nums(a, a+4);
    cout << jump(nums) << endl;
    return 0;
}
