#include <bits/stdc++.h>
using namespace std;

class BinaryMatrix {
  public:
        int get(int x, int y);
        vector<int> dimensions();
};

// leetcode-Leftmost Column with at Least a One by Robin
int binary_search_leftmost_1(BinaryMatrix &binaryMatrix, int row, int col){
    int l = 0, r = col - 1;
    while(l <= r){
        int mid = l + (r - l) / 2;
        int x = binaryMatrix.get(row, mid);
        if(x == 0){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    return l;
}

int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
    vector<int> dimension = binaryMatrix.dimensions();
    int n = dimension[0], m = dimension[1];
    int min_ = m;
    for(int i=0; i<n; ++i){
        min_ = min(min_, binary_search_leftmost_1(binaryMatrix, i, m));
    }
    return min_ == m? -1: min_;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
