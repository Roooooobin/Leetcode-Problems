#include <bits/stdc++.h>
using namespace std;

int addDigits(int num) {
    return 1 + (num-1) % 9;
}

int main() {
    int num = 234;
    cout << addDigits(num) << endl;
    return 0;
}