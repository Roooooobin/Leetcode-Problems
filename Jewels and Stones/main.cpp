#include <bits/stdc++.h>
using namespace std;

// leetcode-771 by Robin
int numJewelsInStones(string J, string S) {
    int hash[128] = {};
    for(char c: J){
        hash[c] = 1;
    }
    int count = 0;
    for(char c: S){
        count += hash[c];
    }
    return count;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
