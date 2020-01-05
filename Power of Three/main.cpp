#include <iostream>

bool isPowerOfThree(int n){
    return (n>0 && 1162261467 %n == 0);
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}