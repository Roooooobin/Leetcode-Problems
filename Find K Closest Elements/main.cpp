#include <bits/stdc++.h>
using namespace std;

// leetcode-658 by Robin, 100ms
vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    int n = arr.size();
    vector<int> smaller;
    vector<int> larger;
    int pos = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
    int i, j;
    if(pos == n){
        i = n-1, j = n;
    }
    else if(pos == 0){
        i = -1, j = 0;
    }
    else{
        if(arr[pos]-x >= x-arr[pos-1]){
            i = pos-1, j = pos;
        }
        else{
            i = pos, j = pos+1;
        }
    }
    while(k){
        if(j >= n){
            smaller.push_back(arr[i--]);
            k--;
        }
        else if(i < 0){
            larger.push_back(arr[j++]);
            k--;
        }
        else if(i >= 0 && j < n){
            if(x-arr[i] <= arr[j]-x){
                smaller.push_back(arr[i--]);
                k--;
            }
            else{
                larger.push_back(arr[j++]);
                k--;
            }
        }
        else{
            break;
        }
    }
    vector<int> ans;
    for(int i=smaller.size()-1; i>=0; --i){
        ans.push_back(smaller[i]);
    }
    for(int i=0; i<larger.size(); ++i){
        ans.push_back(larger[i]);
    }
    return ans;
}

// 192ms
vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    sort(arr.begin(), arr.end(), [&](int a, int b){
        if(abs(a-x) == abs(b-x)){
            return a < b;
        }
        else{
            return abs(a-x) < abs(b-x);
        }
    });
    vector<int> ans(arr.begin(), arr.begin()+k);
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> ans = findClosestElements(arr, 4, 5);
    for(int x: ans){
        cout << x << ' ';
    }
    return 0;
}


