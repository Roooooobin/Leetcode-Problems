#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

void _reverse(vector<int>& nums, int start)
{
    int i = start, j = nums.size() - 1;
    while(i < j){
        swap(nums[i], nums[j]);
        i++;
        j--;
    }
}

void nextPermutation(vector<int>& nums) {
    int i = nums.size() - 2;
    //从后向前查找第一个变小的元素x
    while(i >= 0 && nums[i+1] <= nums[i]) i--;
    cout << i << endl;
    if(i >= 0){
        int j = nums.size() - 1;
        //从后向前查找第一个大于x的元素y
        while(j >= 0 && nums[j] <= nums[i]) j--;
        //交换x、y
        swap(nums[i], nums[j]);
    }
    //反转x之后的元素
    _reverse(nums, i+1);
}

int main()
{
//    int a[6] = {1, 6, 1, 5, 3, 2};
    int a[3] = {3, 2, 1};
    vector<int> vi(a, a+3);
    nextPermutation(vi);
    for(auto x: vi){
        cout << x << ' ';
    }
    return 0;
}
