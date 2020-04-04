#include <bits/stdc++.h>
using namespace std;

// leetcode-734, lintcode-856
bool isSentenceSimilarity(vector<string> &words1, vector<string> &words2, vector<vector<string>> &pairs) {
    if(words1.size() != words2.size()) return false;
    unordered_set<string> table;
    for (auto vi : pairs) {
        table.insert(vi[0] + '0' + vi[1]);
        table.insert(vi[1] + '0' + vi[0]);
    }
    for(int i=0; i<words1.size(); ++i){
        if(words1[i] == words2[i]) continue;
        if(!table.count(words1[i] + '0' + words2[i])){
            return false;
        }
    }
    return true;
}

int main() {
    vector<string> words1 = {"g", "e", "o"};
    vector<string> words2 = {"g", "f", "s"};
    vector<vector<string>> pairs = {{"g", "e",}, {"f", "e"}, {"o", "s"}};
    cout << isSentenceSimilarity(words1, words2, pairs) << endl;
    return 0;
}
