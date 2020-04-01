#include <bits/stdc++.h>
using namespace std;

vector<string> dictionary = {"surprise", "happy", "ctrip", "travel", "wellcome", "student", "system", "program", "editor"};

bool can_find(string word){
    for(string s: dictionary){
        if(word == s){
            return true;
        }
    }
    return false;
}

//模拟ElasticSearch中的FuzzyQuery中的单词纠正
int main() {
    string s;
    cin >> s;
    // pair: word, step(<=2)
    queue<pair<string, int>> q;
    q.push({s, 0});
    string ans = "null";
    while(!q.empty()){
        pair<string, int> cur = q.front();
        q.pop();
        if(cur.second <= 2 && can_find(cur.first)){
            ans = cur.first;
            break;
        }
        // BFS
        // delete
        // add
        // replace
    }
    cout << ans << endl;
    return 0;
}
