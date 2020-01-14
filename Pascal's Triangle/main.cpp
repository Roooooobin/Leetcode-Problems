#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int> > ans;
    for(int i=0; i<numRows; i++){
        vector<int> row(i+1, 0);
        row[0] = row[i] = 1;
        for(int j=1; j<i; j++){
            row[j] = ans[i-1][j-1] + ans[i-1][j];
        }
        ans.push_back(row);
    }
    return ans;
}

int main() {
    vector<vector<int> > res = generate(10);
    for(auto vi: res){
        for(auto x: vi){
            cout << x << ' ';
        }
        cout << endl;
    }
    return 0;
}