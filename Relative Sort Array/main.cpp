#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int index[1001], idx = 0;
        for(int i=0; i<1001; i++){
            index[i] = 1000+i;
        }
        for(int x : arr2){
            index[x] = idx++;
        }
        sort(arr1.begin(), arr1.end(), [index](int a, int b){
            return index[a] < index[b];
        });
        return arr1;
    }
};

int main() {
    vector<int> arr1 = {2,3,1,3,2,4,6,7,9,2,19};
    vector<int> arr2 = {2,1,4,3,9,6};
    Solution s;
    vector<int> ans = s.relativeSortArray(arr1, arr2);
    for(auto& x: ans){
        cout << x << ' ';
    }
    return 0;
}