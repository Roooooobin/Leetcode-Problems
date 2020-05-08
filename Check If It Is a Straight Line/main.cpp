#include <bits/stdc++.h>
using namespace std;

// leetcode-1232 by Robin
bool checkStraightLine(vector<vector<int>>& coordinates) {
    int n = coordinates.size();
    if(n == 2) return true;
    int x0 = coordinates[0][0], y0 = coordinates[0][1];
    int yDiff = coordinates[1][1] - y0;
    int xDiff = coordinates[1][0] - x0;
    for(int i=2; i<n; ++i){
        if((coordinates[i][1] - y0) * xDiff != (coordinates[i][0] - x0) * yDiff){
            return false;
        }
    }
    return true;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
