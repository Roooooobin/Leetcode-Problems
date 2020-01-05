#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

int binary_to_int(string s)
{
    int num = 0;
    for(int i=0; i<s.size(); i++){
        num = num * 2 + s[i] - '0';
    }
    return num;
}

string int_to_binary(int num)
{
    string s;
    while(num){
        s += num % 2 + '0';
        num /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}

string addBinary(string a, string b) {
    int na = binary_to_int(a);
    int nb = binary_to_int(b);
    int nc = na + nb;
    return int_to_binary(nc);
}

int main()
{
    cout << addBinary("111", "1101") << endl;
    return 0;
}
