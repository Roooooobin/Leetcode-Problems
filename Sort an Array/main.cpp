#include <bits/stdc++.h>
using namespace std;

// leetcode-912 by Robin
// heap sort
vector<int> sortArray(vector<int>& nums) {
    int n = nums.size();
    for(int i=n/2-1; i>=0; --i){
        adjust_heap(nums, i, n);
    }
    for(int i=n-1; i>0; --i){
        swap(nums[0], nums[i]);
        adjust_heap(nums, 0, i);
    }
    return nums;
}

void adjust_heap(vector<int>& nums, int l, int r){
    int tmp = nums[l];
    int i;
    for(i=2*l+1; i<r; i=i*2+1){
        if(i+1 < r && nums[i] < nums[i+1]){  // leftChild < rightChild
            i++;
        }
        if(nums[i] > tmp){
            nums[l] = nums[i];
            l = i;
        }
        else{
            break;
        }
    }
    nums[l] = tmp;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
