#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

int judge(string s, vector<int>& pos_dot)
{
    for(int i=1; i<pos_dot.size(); i++){
        int num = 0;
        //special judge for 00, 01..
        if(s[pos_dot[i-1]] == '0' && pos_dot[i]-pos_dot[i-1] > 1) return 0;
        for(int j=pos_dot[i-1]; j<pos_dot[i]; j++){
            num = num * 10 + s[j] - '0';
        }
        if(num > 255) return 0;
    }
    if(pos_dot.size() < 4) return 1;
    //check if all the dots' arrangement can form valid address
    int num = 0;
    //special judge for 00, 01..
    if(s[pos_dot[3]] == '0' && s.size()-pos_dot[3] > 1) return 0;
    for(int j=pos_dot[3]; j<s.size(); j++){
        num = num * 10 + s[j] - '0';
    }
    if(num > 255) return 0;
    if(pos_dot.size() == 4) return 2;
    return 0;
}

void solve(string s, int cur, vector<int>& pos_dot, vector<string>& ret)
{
    if( cur >= s.size() || judge(s, pos_dot) == 0) return;
    else if(judge(s, pos_dot) == 1){
        for(int k=1; k<=3; k++){
            pos_dot.push_back(cur+k);
            solve(s, cur+k, pos_dot, ret);
            pos_dot.pop_back();
        }
    }
    else{
        string retS;
//        for(auto x: pos_dot){
//            cout << x << endl;
//        }
        for(int i=1; i<4; i++){
            for(int j=pos_dot[i-1]; j<pos_dot[i]; j++){
                retS += s[j];
            }
            retS += '.';
        }
        for(int i=pos_dot[3]; i<s.size(); i++){
            retS += s[i];
        }
        ret.push_back(retS);
    }
}

vector<string> restoreIpAddresses(string s) {
    if(s.size() < 4 || s.size() > 12) return vector<string>{};
    vector<string> ans;
    vector<int> pos;
    pos.push_back(0);
    for(int i=1; i<=3; i++){
        pos.push_back(i);
        solve(s, i, pos, ans);
        pos.pop_back();
    }
    return ans;
}

int main()
{
    int a[] = {0, 3, 6, 8};
    VI pos_dot(a, a+4);
    string s = "00001";
    string retS;
//    for(int i=1; i<4; i++){
//        for(int j=pos_dot[i-1]; j<pos_dot[i]; j++){
//            retS += s[j];
//        }
//        retS += '.';
//    }
//    for(int i=pos_dot[3]; i<s.size(); i++){
//        retS += s[i];
//    }
//    cout << retS << endl;
    vector<string> ans = restoreIpAddresses(s);
    for(auto s: ans){
        cout << s << endl;
    }
    return 0;
}
