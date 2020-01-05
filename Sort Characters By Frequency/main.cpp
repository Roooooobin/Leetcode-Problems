#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<char, int> a, pair<char, int> b){
    return a.second > b.second;
}

string frequencySort(string s) {
    map<char, int> mci;
    for(auto c: s){
        if(mci.count(c)){
            mci[c]++;
        }
        else{
            mci[c] = 1;
        }
    }
    vector<pair<char, int>> table;
    for(auto ite: mci){
        table.emplace_back(ite.first, ite.second);
    }
    sort(table.begin(), table.end(), cmp);
    string ret;
    for(auto p: table) {
        for(int i=0; i<p.second; i++){
            ret += p.first;
        }
    }
    return ret;
}

int main() {
    string ans = frequencySort("cbacbA");
    cout << ans << endl;
}