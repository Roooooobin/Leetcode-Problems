#include <bits/stdc++.h>
using namespace std;

// leetcode-1009 by Robin
int bitwiseComplement(int N) {
    if(N == 0) return 1;
    long x = 1;
    while(x <= N){
        x <<= 1;
    }
    return (x-1) ^ N;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
