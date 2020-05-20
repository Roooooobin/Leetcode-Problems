#include <bits/stdc++.h>
using namespace std;

// leetcode-1371 by Robin
int findTheLongestSubstring(string s) {
    int n = s.size();
    string vowels = "aeiou";
    const int INF = 0x3f3f3f3f;
    vector<int> state(32, INF);  // total 32 states for 5 vowels
    state[0] = 0;
    int curState = 0;
    int ans = 0;
    for (int i=1; i<=n; ++i) {
        for (int j=0; j<5; ++j) {
            if (s[i-1] == vowels[j]) {
                curState ^= (1 << j);
                break;
            }
        }
        state[curState] = min(state[curState], i);
        ans = max(ans, i - state[curState]);
    }
    return ans;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
