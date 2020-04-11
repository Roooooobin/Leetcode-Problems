#include <bits/stdc++.h>
using namespace std;

// leetcode-88 by Robin
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int pos = m+n-1;
    int i = m-1, j = n-1;
    while(i >= 0 && j >= 0){
        if(nums2[j] >= nums1[i]){
            nums1[pos--] = nums2[j--];
        }
        else{
            nums1[pos--] = nums1[i--];
        }
    }
    while(j >= 0){
        nums1[pos--] = nums2[j--];
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
