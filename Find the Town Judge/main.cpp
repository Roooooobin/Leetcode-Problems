#include <bits/stdc++.h>
using namespace std;

// leetcode-977 by Robin
int findJudge(int N, vector<vector<int>>& trust) {
    vector<int> in(N+1, 0);
    vector<int> out(N+1, 0);
    for(auto vi: trust){
        in[vi[0]]++;
        out[vi[1]]++;
    }
    for(int i=1; i<=N; ++i){
        if(in[i] == 0 && out[i] == N-1){
            return i;
        }
    }
    return -1;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
