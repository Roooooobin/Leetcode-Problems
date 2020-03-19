#include <bits/stdc++.h>
using namespace std;

int getSum(int a, int b) {
    int getSum(int a, int b) {
        return b==0? a: getSum(a^b, (unsigned int)(a&b)<<1);
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
