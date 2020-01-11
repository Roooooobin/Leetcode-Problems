#include <iostream>
using namespace std;

int hammingWeight(uint32_t n) {
    int num_1 = 0;
    while(n){
        num_1++;
        n &= (n - 1);
    }
    return num_1;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}