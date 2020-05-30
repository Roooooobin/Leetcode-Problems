#include <bits/stdc++.h>
using namespace std;

// leetcode-974 by Robin
vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
    sort(points.begin(), points.end(), [](vector<int>& a, vector<int>& b) {
        return a[0] * a[0] + a[1] * a[1] < b[0] * b[0] + b[1] * b[1];
    });
    return vector<vector<int>>(points.begin(), points.begin()+K);
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
