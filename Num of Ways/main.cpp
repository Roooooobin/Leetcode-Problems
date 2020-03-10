#include <bits/stdc++.h>
using namespace std;

int num_of_ways(int n){
    int t1 = 1, t2 = 2;
    for(int i=3; i<=n; i++){
        t2 = t1 + t2;
        t1 = t2 - t1;
    }
    return t2;
}

int main() {
    cout << num_of_ways(5) << endl;
    return 0;
}
