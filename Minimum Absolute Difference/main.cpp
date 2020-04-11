#include <bits/stdc++.h>
using namespace std;

// leetcode-1200 by Robin
vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    int min_ = arr[1] - arr[0];
    int n = arr.size();
    for(int i=1; i<n; ++i){
        min_ = min(min_, arr[i]-arr[i-1]);
    }
    for(int i=1; i<n; ++i){
        if(arr[i]-arr[i-1] == min_){
            ans.push_back({arr[i-1], arr[i]});
        }
    }
    return ans;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
