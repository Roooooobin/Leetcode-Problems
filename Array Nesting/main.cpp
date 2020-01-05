#include <bits/stdc++.h>
using namespace std;

//int arrayNesting(vector<int>& nums) {
//    int table[20003];
//    int n = nums.size();
//    int max_ = 1;
//    int cnt;
//    int tmp;
//    for(int i=0; i<n; i++){
//        if(table[i]) continue;
////        cout << i << endl;
//        cnt = 1;
//        table[i] = 1;
//        tmp = nums[i];
//        while(!table[tmp]){
//            table[tmp] = 1;
//            tmp = nums[tmp];
//            cnt++;
//        }
//        max_ = max(cnt, max_);
//    }
//    return max_;
//}

int arrayNesting(vector<int>& nums) {
    int max_ = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int k = i; nums[k] >= 0; cnt++) {
            int tmp = nums[k];
            nums[k] = -1;
            k = tmp;
        }
        max_ = max(max_, cnt);
    }
    return max_;
}

int main() {
//    vector<int> nums = {1, 2, 0, 5, 3, 6, 4};
    vector<int> nums = {0, 2, 1};
    cout << arrayNesting(nums) << endl;
    return 0;
}