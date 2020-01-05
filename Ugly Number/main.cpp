#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

bool isUgly(int num) {
    if(num == 0) return false;
    for(int i=2; i<=5; i++){
        while(num % i == 0){
            num /= i;
        }
    }
    return num == 1;
}

int main()
{
    cout << isUgly(1690) << endl;
    return 0;
}
