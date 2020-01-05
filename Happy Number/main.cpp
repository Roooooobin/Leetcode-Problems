#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

bool isHappy(int n) {
    unordered_map<int, int> tble;
    tble[n] = 1;
    while(23){
        int x = 0;
        while(n){
            x += (n % 10) * (n % 10);
            n /= 10;
        }
        n = x;
        if(n == 1) return true;
        if(tble[n] == 1) return false;
        else tble[n] = 1;
    }
}

int main()
{
    cout << isHappy(11) << endl;
    return 0;
}
