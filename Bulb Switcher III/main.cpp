#include <bits/stdc++.h>
using namespace std;

int numTimesAllBlue(vector<int>& light) {
    int n = light.size();
    int cnt = 0;
    int max_ = 0;
    for(int i=0; i<n; ++i){
        max_ = max(max_, light[i]);
        if(max_ == i+1) cnt++;
    }
    return cnt;
}

int main() {
    vector<int> light = {3, 2, 4, 1, 5};
    cout << numTimesAllBlue(light) << endl;
    return 0;
}
