#include <bits/stdc++.h>
using namespace std;

// leetcode-1394 by Robin
int findLucky(vector<int>& arr) {
    int a[503] = {};
    for(int& x: arr){
        a[x]++;
    }
    for(int i=500; i>=1; --i){
        if(a[i] == i){
            return i;
        }
    }
    return -1;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
