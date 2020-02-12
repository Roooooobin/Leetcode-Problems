#include <bits/stdc++.h>
using namespace std;

bool canReorderDoubled(vector<int>& A) {
    unordered_map<int, short> table;
    for(auto& x: A){
        table[x]++;
    }
    vector<int> keys;
    for(auto ite: table){
        keys.push_back(ite.first);
    }
    sort(keys.begin(), keys.end(), [](int a, int b){return abs(a) < abs(b);});
    for(auto& x: keys){
        if(table[x] > table[x*2]){
            return false;
        }
        table[x*2] -= table[x];
    }
    return true;
}

int main() {
    vector<int> A = {-2, 4, 2, -4, 2, 4, -3, -6};
    cout << canReorderDoubled(A) << endl;
    return 0;
}
