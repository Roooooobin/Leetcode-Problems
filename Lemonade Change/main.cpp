#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

bool lemonadeChange(vector<int>& bills) {
    int n = bills.size();
    if(n == 0) return true;
    if(bills[0] != 5) return false;
    int cnt_5 = 0, cnt_10 = 0;
    bool flag = true;
    for(int i=0; i<n; i++){
        if(bills[i] == 5){
            cnt_5++;
        }
        else if(bills[i] == 10){
            if(cnt_5 == 0){
                flag = false;
                break;
            }
            cnt_10++;
            cnt_5--;
        }
        else{
            if(cnt_10 > 0 && cnt_5 > 0){
                cnt_10--;
                cnt_5--;
            }
            else if(cnt_5 >= 3){
                cnt_5 -= 3;
            }
            else{
                flag = false;
                break;
            }
        }
    }
    return flag;
}

int main()
{
    VI bills = {5, 5, 5, 10, 20};
    cout << lemonadeChange(bills) << endl;
    return 0;
}
