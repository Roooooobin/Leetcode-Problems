#include <bits/stdc++.h>
using namespace std;

// leetcode-923
int threeSumMulti(vector<int>& A, int target) {
    int n = A.size();
    sort(A.begin(), A.end());
    long ans = 0;
    int mod = 1000000000 + 7;
    for(int i=0; i<n-2; ++i){
        int T = target - A[i];
        int j = i+1, k = n-1;
        while(j < k){
            if(A[j] + A[k] < T){
                j++;
            }
            else if(A[j] + A[k] > T){
                k--;
            }
            else if(A[j] != A[k]){  // A[j] + A[k] == T
                int l = 1, r = 1;
                while(j+1 < k && A[j] == A[j+1]){
                    l++;
                    j++;
                }
                while(k-1 > j && A[k] == A[k-1]){
                    r++;
                    k--;
                }
                ans += l * r;
                ans %= mod;
                j++;
                k--;
            }
            else{   // A[j] == A[k]
                ans += (k-j+1) * (k-j) / 2;
                ans %= mod;
                break;
            }
        }
    }
    return (int)ans;
}

// TLE
//int threeSumMulti(vector<int>& A, int target) {
//    int n = A.size();
//    sort(A.begin(), A.end());
//    int ans = 0;
//    int mod = 1000000000 + 7;
//    for(int i=0; i<n; ++i){
//        for(int j=i+1; j<n; ++j){
//            if(target-A[i]-A[j]<A[j]) break;
//            int upper = upper_bound(A.begin()+j+1, A.end(), target-A[i]-A[j]) - A.begin();
//            int lower = lower_bound(A.begin()+j+1, A.end(), target-A[i]-A[j]) - A.begin();
//            if(lower == n) continue;
//            ans += upper - lower;
//            ans %= mod;
//        }
//    }
//    return ans;
//}

int main() {
    vector<int> nums = {1,1,2,2,3,3,4,4,5,5};
    cout << threeSumMulti(nums, 8) << endl;
    return 0;
}
