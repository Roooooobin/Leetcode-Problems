#include <bits/stdc++.h>
using namespace std;

bool backspaceCompare(string S, string T) {
    stack<char> ss;
    stack<char> st;
    for(char c: S){
        if(!ss.empty() && c == '#'){
            ss.pop();
        }
        else if(c != '#'){
            ss.push(c);
        }
    }
    for(char c: T){
        if(!st.empty() && c == '#'){
            st.pop();
        }
        else if(c != '#'){
            st.push(c);
        }
    }
    if(ss.size() != st.size()) return false;
    else{
        while(!ss.empty()){
            if(ss.top() != st.top()) return false;
            ss.pop();
            st.pop();
        }
        return true;
    }
}

bool backspaceCompare(string S, string T) {
    int ns = S.size(), nt = T.size();
    int i = ns-1, j = nt-1;
    int skips = 0, skipt = 0;
    while(i >= 0 || j >= 0){
        while(i >= 0){
            if(S[i] == '#'){
                skips++;
                i--;
            }
            else if(skips > 0){
                skips--;
                i--;
            }
            else break;
        }

        while(j >= 0){
            if(T[j] == '#'){
                skipt++;
                j--;
            }
            else if(skipt > 0){
                skipt--;
                j--;
            }
            else break;
        }

        if(i >= 0){
            if(j < 0 || S[i] != T[j]){
                return false;
            }
        }
        else{
            if(j >= 0) return false;
        }
        i--;
        j--;
    }
    return true;
}

// review 2020.4.9
bool backspaceCompare(string s, string t){
    int ns = s.size(), nt = t.size();
    int i = ns-1, j = nt-1;
    int skips = 0, skipt = 0;
    while(i >= 0 || j >= 0){
        while(i > 0){
            if(s[i] == '#'){
                skips++;
                i--;
            }
            else if(skips > 0){
                skips--;
                i--;
            }
            else break;
        }
        while(j > 0){
            if(t[j] == '#'){
                skipt++;
                j--;
            }
            else if(skipt > 0){
                skipt--;
                j--;
            }
        }
        if(i >= 0){
            if(j < 0 || s[i] != t[j]){
                return false;
            }
        }
        else{
            if(j >= 0) return false;
        }
        i--;
        j--;
    }
    return true;
}

int main() {
    cout << backspaceCompare("xywrrmp", "xywrrmu#p") << endl;
    cout << backspaceCompare("abc##c", "ad#c") << endl;
    cout << backspaceCompare("abc#c", "ad#c") << endl;
    cout << backspaceCompare("aba##c", "bab#c") << endl;
    cout << backspaceCompare("y#fo##f",
                             "y#f#o##f") << endl;
    return 0;
}

