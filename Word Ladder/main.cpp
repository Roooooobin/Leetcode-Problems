#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

struct WORD
{
    string s;
    int step;
    WORD(string ss): s(ss), step(1){}
    WORD(string ss, int val): s(ss), step(val){}
};

//int ladderLength(string beginWord, string endWord, vector<string>& wordList)
//{
//    set<string> words(wordList.begin(), wordList.end());
//    if(!words.count(endWord)) return 0;
//    queue<WORD> que;
//    WORD st(beginWord);
//    que.push(st);
//    while(!que.empty()){
//        WORD cur = que.front();
//        que.pop();
//        if(cur.s == endWord){
//            return cur.step;
//        }
//        for(int i=0; i<cur.s.size(); i++){
//            string newS = cur.s;
//            for(int k=0; k<26; k++){
//                newS[i] = 'a' + k;
//                if(words.count(newS)){
//                    que.push(WORD(newS, cur.step+1));
//                    words.erase(newS);
//                }
//            }
//        }
//    }
//    return 0;
//}

int ladderLength(string beginWord, string endWord, vector<string>& wordList)
{
    unordered_set<string> words(wordList.begin(), wordList.end());
    if(!words.count(endWord)) return 0;
    queue<WORD> que;
    WORD st(beginWord);
    que.push(st);
    while(!que.empty()){
        WORD cur = que.front();
        que.pop();
        if(cur.s == endWord){
            return cur.step;
        }
        for(int i=0; i<cur.s.size(); i++){
            string newS = cur.s;
            for(int k=0; k<26; k++){
                newS[i] = 'a' + k;
                if(words.count(newS)){
                    que.push(WORD(newS, cur.step+1));
                    words.erase(newS);
                }
            }
        }
    }
    return 0;
}


int main()
{
    vector<string> vs;
    vs.push_back("hot");
    vs.push_back("dot");
    vs.push_back("dog");
    vs.push_back("lot");
    vs.push_back("log");
    vs.push_back("cog");
    cout << ladderLength("hit", "cog", vs) << endl;
    return 0;
}
