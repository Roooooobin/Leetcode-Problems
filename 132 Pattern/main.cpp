#include <bits/stdc++.h>
using namespace std;

bool find132pattern(vector<int>& nums) {
    int n = nums.size();
    int min_ = INT_MAX;
    for(int i=0; i<n-1; i++){
        min_ = min(min_, nums[i]);
        for(int j=i+1; j<n; j++){
            if(min_ < nums[j] && nums[j] < nums[i]) return true;
        }
    }
    return false;
}

bool find132pattern(vector<int>& nums) {
    int n = nums.size();
    stack<int> st;
    int s3 = INT_MAX;
    // top of the stack always store the biggest to maintain s3 to be as big as possible
    for(int i=n-1; i>=0; i--){
        if(nums[i] < s3) return true;
        else{
            while(!st.empty() && nums[i] > st.top()){
                s3 = st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
    }
    return false;
}

int main() {
    vector<int> nums = {1, 3};
    return 0;
}
