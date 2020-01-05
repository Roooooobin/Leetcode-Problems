#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

//int scoreOfParentheses(string S) {
//    if(S.size() == 0) return 0;
//    stack<char> sc;
//    int ans = 0;
//    int i = 0;
//    int n = S.size();
//    while(i < n){
//        int score = 0;
//        int pro = 1;
//        sc.push(S[i++]);
//        while(i < n && !sc.empty()){
//            if(S[i] == ')'){
//                if(S[i-1] == '('){
//                    score += 1;
//                }
//                else{
//                    score = score * pro;
//                }
//                if(sc.size() != 1) pro /= 2;
//                sc.pop();
//                i++;
//            }
//            else{
//                sc.push(S[i++]);
//                pro *= 2;
//            }
//        }
//        ans += score * 2;
//    }
//    return ans;
//}

int scoreOfParentheses(string S) {
    stack<int> si;
    si.push(0);
    for(char c: S){
        if(c == '('){
            si.push(0);
        }
        else{
            int x = si.top();
            si.pop();
            //特殊处理单一的()
            si.top() += max(x * 2, 1);
        }
    }
    return si.top();
}

int main()
{
    string parenthesises1 = "((()()))()";
    string parenthesises = "()";
    cout << scoreOfParentheses(parenthesises1) << endl;
    return 0;
}
