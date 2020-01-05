#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

int numMatchingSubseq(string S, vector<string>& words) {
    int ans = 0;
    int n = S.size();
    vector<vector<int>> char_tble(26);
    for(int i=0; i<n; i++){
        char_tble[S[i]-'a'].push_back(i);
    }
    for(const auto& word: words){
        int pos = -1;
        bool isSequence = true;
        for(auto x: word){
            auto ite = upper_bound(char_tble[x-'a'].begin(), char_tble[x-'a'].end(), pos);
            if(ite != char_tble[x-'a'].end()){
                pos = *ite;
            }
            else{
                isSequence = false;
                break;
            }
        }
        if(isSequence) ans++;
    }
    return ans;
}

int main()
{

    return 0;
}
