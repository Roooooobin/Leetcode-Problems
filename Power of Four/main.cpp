#include <bits/stdc++.h>
using namespace std;

bool isPowerOfFour(int num) {
    return (num > 0) && ((num & (num-1)) == 0) && ((num & 0x55555555) == num);
}

int main() {

    return 0;
}