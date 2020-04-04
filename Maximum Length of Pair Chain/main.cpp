#include <bits/stdc++.h>
using namespace std;

// leetcode-646
int findLongestChain(vector<vector<int>>& pairs) {
    sort(pairs.begin(), pairs.end(), [](vector<int> a, vector<int> b){
        if(a[0] == b[0]) return a[1] < b[1];
        else return a[0] < b[0];
    });
    int n = pairs.size();
    vector<int> dp(n, 1);
    for(int i=1; i<n; ++i){
        for(int j=0; j<i; ++j){
            if(pairs[i][0] > pairs[j][1]){
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
    }
    return dp[n-1];
}

int findLongestChain(vector<vector<int>>& pairs){
    sort(pairs.begin(), pairs.end(), [](vector<int> a, vector<int> b){
        return a[1] < b[1];
    });
    int n = pairs.size();
    int cur = INT_MIN;
    int ans = 0;
    for(vector<int> vi: pairs){
        if(cur < vi[0]){
            ans++;
            cur = vi[1];
        }
    }
    return ans;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
