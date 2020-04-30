#include <bits/stdc++.h>
using namespace std;

class MountainArray {
  public:
        int get(int index);
        int length();
};

// leetcode-1095 by Robin inspired by https://leetcode.com/problems/find-in-mountain-array/discuss/317603/C%2B%2B-Find-Peak-(162)-%2B-Binary-Search
// first find peak, the two rounds of binary search
class Solution {
public:
    int binarySearch(MountainArray& arr, int target, int l, int r, bool asc=true){  // asc to distinguish two round of bs
        while(l <= r){
            int mid = l + (r - l) / 2;
            int midVal = arr.get(mid);  // reduce interactive moves
            if(midVal == target) return mid;
            if(midVal < target == asc){  // left side of peak is ascending, right side of peak is descending
                l = mid + 1;
            }
            else r = mid - 1;
        }
        return -1;
    }

    int findInMountainArray(int target, MountainArray &mountainArr) {
        int peak = 0, n = mountainArr.length()-1;
        while(peak < n){
            int mid = peak + (n - peak) / 2;
            if(mountainArr.get(mid) > mountainArr.get(mid+1)) n = mid;
            else peak = mid + 1;
        }
        int idx = binarySearch(mountainArr, target, 0, peak);
        return idx != -1? idx: binarySearch(mountainArr, target, peak+1, mountainArr.length()-1, false);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
