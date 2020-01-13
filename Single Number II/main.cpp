#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
    int ones = 0, twos = 0;
    for(int num : nums){
        ones = (ones ^ num) & ~twos;
        twos = (twos ^ num) & ~ones;
    }
    return ones;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}