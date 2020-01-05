#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

//void sortColors(vector<int>& nums) {
//    int zeros = 0;
//    int ones = 0;
//    int twos = 0;
//    for(int i=0; i<nums.size(); i++){
//        zeros += (nums[i] == 0);
//        ones += (nums[i] == 1);
//        twos += (nums[i] == 2);
//    }
//    for(int i=0; i<nums.size(); i++){
//        if(zeros){
//            nums[i] = 0;
//            zeros--;
//        }
//        else if(ones){
//            nums[i] = 1;
//            ones--;
//        }
//        else nums[i] = 2;
//    }
//}

void sortColors(vector<int>& nums)
{
    int low = 0, mid = 0, high = nums.size() - 1;

    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[low++], nums[mid++]);
        }
        else if(nums[mid] == 1){
            mid++;
        }
        else if(nums[mid] == 2){
            swap(nums[mid], nums[high--]);
        }
    }
}

int main()
{
    int a[6] = {0, 1, 1, 2, 2, 1};
    VI v(a, a+6);
    swap(v[1], v[3]);
    sortColors(v);
    for(auto x: v){
        cout << x << endl;
    }
    return 0;
}
