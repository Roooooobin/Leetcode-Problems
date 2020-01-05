#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

string longestPalindrome(string s) {
    if(s.size() == 0 || s.size() == 1) return s;
    int len = s.size();
    int start = 0;
    int max_len = 1;
    for(int i=0; i<len; ){
        if(len - i <= max_len / 2) break;
        int j = i;
        int k = i;
        while(k<len-1 && s[k+1] == s[k]) ++k;   //skip duplicates
        i = k+1;
        while(j>0 && k<len-1 && s[k+1] == s[j-1]){
            ++k;
            --j;
        }
        int cur_len = k - j + 1;
        if(max_len < cur_len){
            max_len = cur_len;
            start = j;
        }
    }
    return s.substr(start, max_len);
}

//string longestPalindrome(string s) {
//    if (s.empty()) return "";
//    if (s.size() == 1) return s;
//    int min_start = 0, max_len = 1;
//    for (int i = 0; i < s.size();) {
//      if (s.size() - i <= max_len / 2) break;
//      int j = i, k = i;
//      while (k < s.size()-1 && s[k+1] == s[k]) ++k; // Skip duplicate characters.
//      i = k+1;
//      while (k < s.size()-1 && j > 0 && s[k + 1] == s[j - 1]) { ++k; --j; } // Expand.
//      int new_len = k - j + 1;
//      if (new_len > max_len) { min_start = j; max_len = new_len; }
//    }
//    return s.substr(min_start, max_len);
//}

int main()
{
    cout << longestPalindrome("cbbdbb") << endl;
//    cout << longestPalindrome("cbbd") << endl;
    return 0;
}
