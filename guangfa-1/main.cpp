#include <bits/stdc++.h>
using namespace std;

long long sumCal(int num, int times) {
    long long x = num;
    long long sum = 0;
    while(times--){
        sum += x;
        x = x * 10 + num;
    }
    return sum;
}

int main()
{
    cout << sumCal(2, 3) << endl;
    return 0;
}
