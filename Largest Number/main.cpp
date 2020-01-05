#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

static string intTOstring(int x)
{
    if(x == 0) return "0";
    string s;
    while(x){
        s += (x % 10) + '0';
        x /= 10;
    }
    reverse(s.begin(), s.end());
    return s;
}

static bool compare(int a, int b)
{
    string sa = intTOstring(a);
    string sb = intTOstring(b);
    string sab = sa + sb;
    string sba = sb + sa;
    return sab > sba;
}

string largestNumber(vector<int>& nums) {
//    sort(nums.begin(), nums.end(), [](int a, int b)->bool{
//        string sa = intTOstring(a);
//        string sb = intTOstring(b);
//        string sab = sa + sb;
//        string sba = sb + sa;
//        return sab > sba;
//        });
    sort(nums.begin(), nums.end(), compare);
    string ans;
    for(int i=0; i<nums.size(); i++){
        ans += intTOstring(nums[i]);
    }
    ans = ans[0] == '0' ? "0" : ans;
    return ans;
}

int main()
{
    int a[5] = {3, 30, 34, 5, 9};
    vector<int> nums(a, a+5);
    cout << largestNumber(nums) << endl;
    return 0;
}
