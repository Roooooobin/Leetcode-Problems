#include <bits/stdc++.h>
using namespace std;

vector<int> getRow(int rowIndex) {
    vector<int> row(rowIndex+1, 0);
    row[0] = 1;
    for(int i=0; i<=rowIndex; i++){
        for(int j=i; j>=1; j--){
            row[j] += row[j-1];
        }
    }
    return row;
}

int main() {
    vector<int> ans = getRow(4);
    for(auto x: ans){
        cout << x << ' ';
    }
    return 0;
}
