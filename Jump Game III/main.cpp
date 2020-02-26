#include <bits/stdc++.h>
using namespace std;

bool canReach(vector<int>& arr, int start) {
    int n = arr.size();
    unordered_set<int> table;
    queue<int> q;
    q.push(start);
    table.insert(start);
    int cur, nxt;
    while(!q.empty()){
        cur = q.front();
        q.pop();
        if(arr[cur] == 0) return true;
        for(int sign = -1; sign <= 1; sign+=2){
            nxt = cur + sign * arr[cur];
            if(nxt >= 0 && nxt < n && !table.count(nxt)){
                q.push(nxt);
                table.insert(nxt);
            }
        }
    }
    return false;
}

int main() {
    vector<int> arr = {4, 2, 3, 1, 3, 5, 2};
    cout << canReach(arr, 5) << endl;
    return 0;
}
