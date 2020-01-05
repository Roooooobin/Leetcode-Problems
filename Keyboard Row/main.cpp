#include <bits/stdc++.h>
using namespace std;

vector<string> findWords(vector<string>& words) {
    set<char> line1 = {'q', 'Q', 'w', 'W', 'e', 'E', 'r', 'R', 't', 'T', 'y', 'Y', 'u', 'U', 'i', 'I', 'o', 'O', 'p', 'P'};
    set<char> line2 = {'a', 'A', 's', 'S', 'd', 'D', 'f', 'F', 'g', 'G', 'h', 'H', 'j', 'J', 'k', 'K', 'l', 'L'};
    set<char> line3 = {'z', 'Z', 'x', 'X', 'c', 'C', 'v', 'V', 'b', 'B', 'n', 'N', 'm', 'M'};
    vector<string> ret;
    for(auto word: words){
        bool flag = true;
        if(line1.count(word[0])){
            for(int i=1; i<word.size(); i++){
                if(!line1.count(word[i])){
                    flag = false;
                    break;
                }
            }
        }
        else if(line2.count(word[0])){
            for(int i=1; i<word.size(); i++){
                if(!line2.count(word[i])){
                    flag = false;
                    break;
                }
            }
        }
        else if(line3.count(word[0])){
            for(int i=1; i<word.size(); i++){
                if(!line3.count(word[i])){
                    flag = false;
                    break;
                }
            }
        }
        if(flag){
            ret.push_back(word);
        }
    }
    return ret;
}

int main() {
    vector<string> strs = {"Hello", "Alaska", "Dad", "Peace"};
    vector<string> ans = findWords(strs);
    for(auto w: ans){
        cout << w << endl;
    }
    return 0;
}