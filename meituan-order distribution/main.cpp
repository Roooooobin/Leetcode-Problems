#include <bits/stdc++.h>
using namespace std;

/*
 打车派单场景, 假定有N个订单， 待分配给N个司机。每个订单在匹配司机前，会对候选司机进行打分，打分的结果保存在N*N的矩阵A， 其中Aij 代表订单i司机j匹配的分值。
假定每个订单只能派给一位司机，司机只能分配到一个订单。求最终的派单结果，使得匹配的订单和司机的分值累加起来最大，并且所有订单得到分配

 第一行包含一个整数N，2≤N≤10。
第二行至第N+1行包含N*N的矩阵

 输出分值累加结果和匹配列表，结果四舍五入保留小数点后两位
（注意如果有多组派单方式得到的结果相同，则有限为编号小的司机分配编号小的订单，比如：司机1得到1号单，司机2得到2号单，就比司机1得到2号单，司机2得到1号单要好）
 */

int main() {
    int n;
    cin >> n;
    double nums[13][13];
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            cin >> nums[i][j];
        }
    }
    vector<int> distributions;
    double sum = 0.0;
    double max_ = -1;
    vector<int> orders;
    for(int i=1; i<=n; ++i){
        orders.push_back(i);
    }
    do{
        sum = 0;
        for(int i=0; i<n; ++i){
            sum += nums[i][orders[i]-1];
        }
        if(sum > max_){
            max_ = sum;
            distributions.clear();
            for(int j=0; j<n; ++j){
                distributions.push_back(orders[j]);
            }
        }
    }while(next_permutation(orders.begin(), orders.end()));
    printf("%.2f\n", max_);
    for(int i=0; i<n; ++i){
        cout << i+1 << ' ' << distributions[i] << endl;
    }
    return 0;
}
