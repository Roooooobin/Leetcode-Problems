#include <bits/stdc++.h>
using namespace std;

// leetcode-836 by Robin
bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
    return !(rec2[0] >= rec1[2] || rec2[3] <= rec1[1] || rec2[1] >= rec1[3] || rec2[2] <= rec1[0]);
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
