#include <bits/stdc++.h>
using namespace std;

// leetcode-1304 by Robin
vector<int> sumZero(int n) {
    vector<int> ans;
    int mid = n / 2;
    for (int x=-mid; x<=mid; ++x) {
        if (x == 0 && n % 2 == 0) continue;
        ans.push_back(x);
    }
    return ans;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
