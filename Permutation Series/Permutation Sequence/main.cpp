#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

void _reverse(string& nums, int start)
{
    int i = start, j = nums.size() - 1;
    while(i < j){
        swap(nums[i], nums[j]);
        i++;
        j--;
    }
}

string getPermutation(int n, int k) {
    string nums;
    for(int i=1; i<=n; i++){
        nums += i + '0';
    }
    k -= 1;
    while(k--){
        int i = n - 2;
        //从后向前查找第一个变小的元素x
        while(i >= 0 && nums[i+1] <= nums[i]) i--;
        if(i >= 0){
            int j = n - 1;
            //从后向前查找第一个大于x的元素y
            while(j >= 0 && nums[j] <= nums[i]) j--;
            //交换x、y
            swap(nums[i], nums[j]);
        }
        //反转x之后的元素
        _reverse(nums, i+1);
    }
    return nums;
}

int main()
{
    cout << getPermutation(3, 4) << endl;
    return 0;
}
