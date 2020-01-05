#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

bool isPalindrome(int x) {
    if(x < 0 || (x != 0 && x % 10 == 0)) return false;
    int sum = 0;
    while(sum < x){
        sum = sum * 10 + x % 10;
        x /= 10;
    }
    return (sum == x) || (sum / 10 == x);
}

int main()
{
    cout << isPalindrome(0) << endl;
    return 0;
}
