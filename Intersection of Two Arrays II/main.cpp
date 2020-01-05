#include <bits/stdc++.h>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> umap1;
    unordered_map<int, int> umap2;
    for(int x: nums1){
        umap1[x]++;
    }
    for(int x: nums2){
        umap2[x]++;
    }
    vector<int> ret;
    for(auto ite: umap1){
        for(int i=0; i<min(umap1[ite.first], umap2[ite.first]); i++){
            ret.push_back(ite.first);
        }
    }
    return ret;
}

int main() {
    vector<int> nums1 = {2, 3};
    vector<int> nums2 = {3, 3, 3, 1, 2};
    vector<int> ans = intersect(nums1, nums2);
    for(auto x: ans){
        cout << x << endl;
    }
    return 0;
}