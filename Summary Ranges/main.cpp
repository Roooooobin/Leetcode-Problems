#include <bits/stdc++.h>
#include <cstring>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

vector<string> summaryRanges(vector<int>& nums) {
    vector<string> ans;
    if(nums.size() == 0) return ans;
    int st = nums[0], ed = nums[0];
    int i = 0, j;
    string s;
    while(i < nums.size()){
        st = nums[i++];
        j = i;
        while(j < nums.size() && nums[j] == nums[j-1]+1){
            j++;
        }
        if(j == i){
            ans.push_back(to_string(st));
        }
        else{
            ed = nums[j-1];
            i = j;
            ans.push_back(to_string(st)+"->"+to_string(ed));
        }
    }
    return ans;
}

int main()
{
    VI nums = {0, 1, 2, 4, 5, 7};
    for(auto s: summaryRanges(nums)){
        cout << s << endl;
    }
    return 0;
}
