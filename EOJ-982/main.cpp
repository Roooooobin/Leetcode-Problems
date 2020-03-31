#include <bits/stdc++.h>
using namespace std;

vector<int> dailyTemperatures(vector<int>& T) {
    int n = T.size();
    stack<int> index;
    vector<int> ans(n, 0);
    for(int i=0; i<n; i++){
        while(!index.empty()){
            int idx = index.top();
            if(T[idx] < T[i]){
                ans[idx] = i - idx;
                index.pop();
            }
            else break;
        }
        index.push(i);
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    int x;
    vector<int> T;
    for(int i=0; i<n; ++i){
        cin >> x;
        T.push_back(x);
    }
    vector<int> ans = dailyTemperatures(T);
    for(int x: ans){
        cout << x << ' ';
    }
    cout << endl;
    return 0;
}
