#include <bits/stdc++.h>
using namespace std;

void adjust_heap(vector<int>& nums, int l, int r){
    int tmp = nums[l];
    for(int i=2*l+1; i<r; i=i*2+1){
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

vector<int> heap_sort(vector<int>& nums){
    int n = nums.size();
    for(int i=n/2-1; i>=0; --i){
        adjust_heap(nums, i, n);
    }
    for(int x: nums){
        cout << x << ' ';
    }
    cout << endl;
    for(int i=n-1; i>0; --i){
        swap(nums[0], nums[i]);
        adjust_heap(nums, 0, i);
    }
    return nums;
}

int main() {
    vector<int> nums = {4, 7, 6, 5, 3};
    vector<int> nums_sorted = heap_sort(nums);
    for(int x: nums_sorted){
        cout << x << ' ';
    }
    cout << endl;
    return 0;
}
