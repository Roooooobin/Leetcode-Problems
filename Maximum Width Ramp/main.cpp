#include <bits/stdc++.h>
using namespace std;

//TLE
//int maxWidthRamp(vector<int>& A) {
//    int n = A.size();
//    int max_ = 0;
//    for(int i=0; i<n; i++){
//        for(int j=n-1; j>=i; j--){
//            if(A[j] >= A[i]){
//                max_ = max(max_, j-i);
//                break;
//            }
//        }
//    }
//    return max_;
//}

//TLE
//int maxWidthRamp(vector<int>& A) {
//    int n = A.size();
//    int max_ = 0;
//    for(int i=0; i<n; i++){
//        for(int j=i; j<n; j++){
//            if(A[j] >= A[i]) max_ = max(max_, j-i);
//        }
//    }
//    return max_;
//}

int maxWidthRamp(vector<int>& A) {
    int n = A.size();
    multimap<int, int> index;
    for(int i=0; i<n; i++){
        index.insert({A[i], i});
    }
    int min_ = n;
    int ans = 0;
    for(auto& it: index){
        ans = max(ans, it.second-min_);
        min_ = min(min_, it.second);
    }
    return ans;
}

int main() {
    vector<int> A = {6, 0, 8, 2, 1, 5};
    cout << maxWidthRamp(A) << endl;
    return 0;
}
