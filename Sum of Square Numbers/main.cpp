#include <bits/stdc++.h>
using namespace std;

bool judgeSquareSum(int c) {
    for(long i=0; i*i<=c; i++){
        int x = sqrt(c - i * i);
        if(x * x == c - i * i){
            return true;
        }
    }
    return false;
}

bool judgeSquareSum(int c) {
    for(long i=0; i*i<=c; i++){
        double x = sqrt(c - i * i);
        cout << x << endl;
        if(x == (int)x ){
            return true;
        }
    }
    return false;
}

/*
 Fermat Theorem:
 Any positive number n is expressible as a sum of two squares if and only if the prime factorization of n,
 every prime of the form (4k+3) occurs an even number of times.
 */
bool judgeSquareSum(int c) {
    for(int i=2; i*i<=c; i++){
        int cnt = 0;
        if(c % i == 0){
            while(c % i == 0){
                cnt++;
                c /= i;
            }
            if(i % 4 == 3 && cnt % 2 != 0){
                return false;
            }
        }
    }
    return c % 4 != 3;
}

int main() {
    cout << judgeSquareSum(13) << endl;
    return 0;
}
