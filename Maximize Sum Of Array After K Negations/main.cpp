#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

int largestSumAfterKNegations(vector<int>& A, int K) {
    sort(A.begin(), A.end());
    int sum = 0;
    for(int i=0; i<A.size(); i++){
        if(A[i] < 0 && K > 0){
            A[i] *= -1;
            K--;
        }
        sum += A[i];
    }
    //负数的个数比K多或是K为偶数（偶数次变换等价于0次）
    if(K == 0 || K % 2 == 0) return sum;
    sort(A.begin(), A.end());
    return sum - 2 * A[0];
}

int main()
{
    VI nums = {2, -3, -1, 5, -4};
    cout << largestSumAfterKNegations(nums, 4) << endl;
    return 0;
}
