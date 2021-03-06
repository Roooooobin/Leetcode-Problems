#include <bits/stdc++.h>
using namespace std;

bool isBadVersion(int version);

// leetcode-278 by Robin
class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1;
        int r = n;
        while(l <= r){
            int mid = l + (r - l) / 2;
            if(isBadVersion(mid)) r = mid - 1;
            else l = mid + 1;
        }
        return l;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
