#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

int largestRectangleArea(vector<int>& heights) {
    stack<int> si;
    heights.push_back(0);
    int n = heights.size();
    int i = 0;
    int area_max = 0;
    while(i < n){
        if(si.empty() || heights[si.top()] <= heights[i]){
            si.push(i++);
        }
        else{
            int tmp = si.top();
            si.pop();
            area_max = max(area_max, heights[tmp] * (si.empty()? i: (i-si.top()-1)));
        }
    }
    return area_max;
}

int main()
{
    VI nums = {2, 1, 5, 6, 2, 3};
    cout << largestRectangleArea(nums) << endl;
    return 0;
}
