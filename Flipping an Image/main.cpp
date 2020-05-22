#include <bits/stdc++.h>
using namespace std;

// leetcode-832 by Robin
vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
    for (vector<int>& vi: A) {
        for (int i=0, j=vi.size()-1; i<j; ++i, --j) {
            int tmp = vi[j];
            vi[j] = vi[i] ^ 1;
            vi[i] = tmp ^ 1;
        }
        if (vi.size() % 2 == 1) {
            vi[vi.size() / 2] ^= 1;
        }
    }
    return A;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
