#include <bits/stdc++.h>
using namespace std;

//O(nlogm)
vector<int> dailyTemperatures(vector<int>& T) {
    int n = T.size();
    unordered_map<int, vector<int> > index;
    for(int i=0; i<n; i++){
        index[T[i]].push_back(i);
    }
//    for(auto ite=index.begin(); ite!=index.end(); ite++){
//        cout << ite->first << '*';
//        for(auto x: ite->second){
//            cout << x << ' ';
//        }
//        cout << endl;
//    }
    vector<int> ans(n, n+1);
    for(int i=0; i<n; i++){
        for(int t=T[i]+1; t<=100; t++){
            int idx = lower_bound(index[t].begin(), index[t].end(), i) - index[t].begin();
            if(idx < index[t].size()){
                ans[i] = min(ans[i], index[t][idx] - i);
            }
        }
        if(ans[i] == n+1) ans[i] = 0;
    }
    return ans;
}

//stack, O(n)
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
    vector<int> T = {73, 74, 75, 71, 69, 72, 76, 73};
    vector<int> ans = dailyTemperatures(T);
    for(auto x: ans){
        cout << x << ' ';
    }
    cout << endl;
    return 0;
}
