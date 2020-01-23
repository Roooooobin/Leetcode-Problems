#include <bits/stdc++.h>
using namespace std;

int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int n = gas.size();
    int total = 0;
    int sum = 0;
    int index = 0;
    for(int i=0; i<n; i++){
        sum += gas[i] - cost[i];
        if(sum < 0){
            index = i + 1;
            total += sum;
            sum = 0;
        }
    }
    total += sum;
    return total < 0? -1: index;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
