#include <bits/stdc++.h>
using namespace std;

// leetcode-1346 by Robin
bool checkIfExist(vector<int>& arr) {
    set<int> s;
    for (int x: arr) {
        if (s.count(2 * x) || (x % 2 == 0 && s.count(x / 2))) return true;
        s.insert(x);
    }
    return false;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
