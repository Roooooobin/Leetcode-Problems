#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

//int maxArea(vector<int>& height) {
//    int _max = 0;
//    int n = height.size();
//    for(int i=0; i<n-1; i++){
//        for(int j=i+1; j<n; j++){
//            _max = max(_max, min(height[i], height[j])*(j-i));
//        }
//    }
//    return _max;
//}

//int maxArea(vector<int>& height) {
//​     int _max = 0, l = 0, r = height.size() - 1;
//​     while (l < r) {
//​         _max = max(_max, min(height[l], height[r]) * (r - l));
//​         if(height[l] < height[r])
//​             l++;
//​         else
//​             r--;
//​     }
//​     return _max;
//}

int maxArea(vector<int>& height)
{
    int _max = 0;
    int l = 0, r = height.size() - 1;
    while(l < r){
        _max = max(_max, min(height[l], height[r]) * (r - l));
        if(height[l] < height[r]){
            l++;
        }
        else{
            r--;
        }
    }
    return _max;
}

int main()
{
    VI X = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(X) << endl;
    return 0;
}
