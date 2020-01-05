#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

//int lengthOfLongestSubstring(string s) {
//    int tble[150] = {};
//    st
//    int _max = min(int(s.size()), 150);
//    bool flag = true;
//    int len = _max;
//    for(len=_max; len>=2; len--){
//        flag = true;
//        memset(tble, 0, sizeof(tble));
//        for(int i=0; i<len; i++){
//            tble[s[i]]++;
//            if(tble[s[i]] > 1){
//                flag = false;
//            }
//        }
//        if(flag) break;
//        for(int i=1; i<=s.size()-len; i++){
//            flag = true;
//            tble[s[i-1]]--;
//            tble[s[i+len-1]]++;
//            for(int j=0; j<150; j++){
//                if(tble[j] > 1){
//                    flag = false;
//                    break;
//                }
//            }
//            if(flag) break;
//        }
//        if(flag) break;
//    }
//    return len;
//}

//int lengthOfLongestSubstring(string s) {
//    set<char> tble;
//    int _max = 0;
//    int n = s.size();
//    int i = 0, j = 0;
//    while(i < n && j < n){
//        if(!tble.count(s[j])){
//            _max = max(_max, j-i+1);
//            tble.insert(s[j++]);
//        }
//        else{
//            tble.erase(s[i++]);
//        }
//    }
//    return _max;
//}

int lengthOfLongestSubstring(string s) {
    bool tble[128] = {};
    int _max = 0;
    int n = s.size();
    int i = 0, j = 0;
    while(i < n && j < n){
        if(!tble[s[j]]){
            _max = max(_max, j-i+1);
            tble[s[j++]] = true;
        }
        else{
            tble[s[i++]] = false;
        }
    }
    return _max;
}

int main()
{
    cout << lengthOfLongestSubstring("abcabcdabc") << endl;
    cout << lengthOfLongestSubstring("ohomm") << endl;
    cout << lengthOfLongestSubstring("pwwkew") << endl;
    cout << lengthOfLongestSubstring("zazmm") << endl;
    cout << lengthOfLongestSubstring("aaa") << endl;
    return 0;
}
