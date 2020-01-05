#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

vector<int> majorityElement(vector<int>& nums) {
    int candidate1, candidate2;
    int cnt1 = 0, cnt2 = 0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i] == candidate1){
            cnt1++;
        }
        else if(nums[i] == candidate2){
            cnt2++;
        }
        else if(cnt1 == 0){
            candidate1 = nums[i];
            cnt1++;
        }
        else if(cnt2 == 0){
            candidate2 = nums[i];
            cnt2++;
        }
        else{
            cnt1--;
            cnt2--;
        }
    }
    vector<int> ans;
    cnt1 = 0;
    cnt2 = 0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i] == candidate1) cnt1++;
        else if(nums[i] == candidate2) cnt2++;
    }
    if(cnt1 > nums.size() / 3) ans.push_back(candidate1);
    if(cnt2 > nums.size() / 3) ans.push_back(candidate2);
    return ans;
}

int main()
{
    int a[7] = {2, 3, 3, 2, 2, 2, 3};
    VI v(a, a+7);
    for(auto x: majorityElement(v)){
        cout << x << endl;
    }
    return 0;
}
