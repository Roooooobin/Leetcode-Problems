#include <bits/stdc++.h>
using namespace std;

vector<int> even_odd_sort(vector<int> nums){
    sort(nums.begin(), nums.end(), [](int a, int b){
        if(a % 2 == b % 2){
            return a < b;
        }
        else{
            return (a % 2) < (b % 2);
        }
    });
    return nums;
}

int main() {
    vector<int> nums = {1, 6, 3, 2, 4, 5, 7};
    for(int x: even_odd_sort(nums)){
        cout << x << ' ';
    }
    cout << endl;
    return 0;
}
