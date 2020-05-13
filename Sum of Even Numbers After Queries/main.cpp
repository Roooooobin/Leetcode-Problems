#include <bits/stdc++.h>
using namespace std;

// leetcode-985 by Robin
vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
    int sum = 0;
    for(int x: A) {
        if(x % 2 == 0){
            sum += x;
        }
    }
    vector<int> ans;
    for(vector<int> query: queries){
        int idx = query[1], val = query[0];
        if(A[idx] % 2 == 0) sum -= A[idx];
        A[idx] += val;
        if(A[idx] % 2 == 0) sum += A[idx];
        ans.push_back(sum);
    }
    return ans;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
