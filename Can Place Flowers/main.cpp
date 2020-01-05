#include <bits/stdc++.h>
using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int len = flowerbed.size();
    int i = 0;
    int cnt = 0;
    while(i < len){
        if(!flowerbed[i] && (!i || !flowerbed[i-1]) && (i == len-1 || !flowerbed[i+1])){
            cnt++;
            flowerbed[i] = 1;
        }
        i++;
    }
    return cnt >= n;
}

int main() {
    vector<int> nums = {0, 0, 0, 0, 1, 0, 0};
    cout << canPlaceFlowers(nums, 3) << endl;
    return 0;
}