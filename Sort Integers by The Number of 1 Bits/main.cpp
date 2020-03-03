#include <bits/stdc++.h>
using namespace std;

int number_bit1(int x){
    int cnt = 0;
    while(x){
        cnt++;
        x &= (x-1);
    }
    return cnt;
}

vector<int> sortByBits(vector<int>& arr) {
    unordered_map<int, int> num2cnt;
    for(int& x: arr){
        num2cnt[x] = number_bit1(x);
    }
    sort(arr.begin(), arr.end(), [&](int a, int b){
        if(num2cnt[a] != num2cnt[b]) return num2cnt[a] < num2cnt[b];
        else return a < b;
    });
    return arr;
}

vector<int> sortByBits(vector<int>& arr) {
    int num2cnt[10003];
    for(int& x: arr){
        num2cnt[x] = number_bit1(x);
    }
    sort(arr.begin(), arr.end(), [&](int a, int b){
        if(num2cnt[a] != num2cnt[b]) return num2cnt[a] < num2cnt[b];
        else return a < b;
    });
    return arr;
}

int main() {
    vector<int> arr = {1024,512,256,128,64,32,16,8,4,2,1};
    vector<int> ans = sortByBits(arr);
    for(int& x: ans){
        cout << x << ' ';
    }
    return 0;
}
