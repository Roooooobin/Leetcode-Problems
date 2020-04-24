#include <bits/stdc++.h>
using namespace std;

// leetcode-42 inspired by Solutions
// two-pointer
int trap(vector<int>& height) {
    int n = height.size();
    int l = 0, r = n - 1;
    int left_max = 0, right_max = 0;
    int ans = 0;
    while(l < r){
        if(height[l] < height[r]){
            height[l] >= left_max? left_max = height[l]: ans += (left_max - height[l]);
            ++l;
        }
        else{
            height[r] >= right_max? right_max = height[r]: ans += (right_max - height[r]);
            --r;
        }
    }
    return ans;
}

int main() {

    return 0;
}
