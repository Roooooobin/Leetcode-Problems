#include <bits/stdc++.h>
using namespace std;

int nthSuperUglyNumber(int n, vector<int>& primes) {
    vector<int> ret(n+1, INT_MAX);
    ret[0] = 1;
    int m = primes.size();
    vector<int> index(m, 0);
    int i = 1;
    while(i < n){
        for(int j=0; j<m; j++){
            ret[i] = min(ret[i], ret[index[j]] * primes[j]);
        }
        for(int j=0; j<m; j++){
            index[j] += (ret[i] == ret[index[j]] * primes[j]);
        }
        i++;
    }
    return ret[n-1];
}

int main() {
    vector<int> primes = {2, 7, 13, 19};
    cout << nthSuperUglyNumber(12, primes) << endl;
    return 0;
}