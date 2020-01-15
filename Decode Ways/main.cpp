#include <bits/stdc++.h>
using namespace std;

int numDecodings(string s) {
    int n = s.size();
    vector<int> ways(n+1, 0);
    int ans = 0;
    if(s[0] == '0') return 0;
    ways[0] = 1;
    ways[1] = 1;
    for(int i=1; i<n; i++){
        if(s[i-1] == '0' || s[i-1] > '2'){
            if(s[i] == '0'){
                ans = 0;
                break;
            }
            else{
                ways[i+1] = ways[i];
            }
        }
        else if(s[i-1] == '1'){
            if(s[i] == '0'){
                ways[i+1] = ways[i-1];
            }
            else{
                ways[i+1] = ways[i-1] + ways[i];
            }
        }
        else{
            if(s[i] >= '1' && s[i] <= '6'){
                ways[i+1] = ways[i-1] + ways[i];
            }
            else if(s[i] == '0'){
                ways[i+1] = ways[i-1];
            }
            else{
                ways[i+1] = ways[i];
            }
        }
    }
    ans = ways[n];
    return ans;
}

int main() {
    std::cout << numDecodings("12120") << std::endl;
    return 0;
}