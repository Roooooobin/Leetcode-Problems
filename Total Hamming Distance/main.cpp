#include <bits/stdc++.h>
using namespace std;

int totalHammingDistance(vector<int>& nums) {
    int sum_hamming_distance = 0;
    int n = nums.size();
    for(int i=0; i<32; i++){
        int num_1 = 0, num_0 = 0;
        for(auto& x: nums){
            if((1 << i) & x) num_1++;
        }
        num_0 = n - num_1;
        sum_hamming_distance += num_0 * num_1;
    }
    return sum_hamming_distance;
}

int main() {
    vector<int> nums = {1411914430,351525660,364254723,700735511,254391807};
    cout << totalHammingDistance(nums) << endl;
    return 0;
}