#include <bits/stdc++.h>
using namespace std;

int maxWidthRamp(vector<int>& A) {
    int n = A.size();
    int max_ = 0;
    for(int i=0; i<n; i++){
        for(int j=n-1; j>=i; j--){
            if(A[j] >= A[i]){
                max_ = max(max_, j-i);
                break;
            }
        }
    }
    return max_;
}

int maxWidthRamp(vector<int>& A) {
    int n = A.size();
    int max_ = 0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(A[j] >= A[i]) max_ = max(max_, j-i);
        }
    }
    return max_;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
