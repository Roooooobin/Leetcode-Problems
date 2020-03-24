#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<string>& words) {
    int n = words.size();
    vector<int> bits(n);
    int ans = 0;
    for(int i=0; i<n; ++i){
        for(char c: words[i]){
            bits[i] |= 1 << (c-'a');
        }
        for(int j=0; j<i; ++j){
            if(!(bits[i] & bits[j])){
                ans = max(ans, int(words[i].size() * words[j].size()));
            }
        }
    }
    return ans;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
