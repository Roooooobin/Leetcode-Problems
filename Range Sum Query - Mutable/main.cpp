#include <bits/stdc++.h>
using namespace std;

class NumArray {
private:
    int n;
    int a[100001];
    int c[100001];

public:
    int lowbit(int x){
        return x & (-x);
    }

    NumArray(vector<int>& nums) {
        n = nums.size();
        memset(a, 0, sizeof(a));
        memset(c, 0, sizeof(c));
        for(int i=0; i<n; ++i){
            update(i, nums[i]);
        }
    }

    void update(int i, int val) {
        val = val - a[i];
        a[i] += val;
        updateBIT(i+1, val);
    }

    void updateBIT(int i, int val){
        while(i <= n){
            c[i] += val;
            i += lowbit(i);
        }
    }

    int sumRange(int i, int j) {
        return getSum(j+1) - getSum(i);
    }

    int getSum(int i){
        int sum = 0;
        while(i > 0){
            sum += c[i];
            i -= lowbit(i);
        }
        return sum;
    }

};

int main() {
    vector<int> nums = {1, 3, 5};
    NumArray* obj = new NumArray(nums);
    cout << obj->sumRange(0, 2) << endl;
    obj->update(1, 2);
    cout << obj->sumRange(0, 2) << endl;
    cout << obj->sumRange(0, 1) << endl;
    return 0;
}
