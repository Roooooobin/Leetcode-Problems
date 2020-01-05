//#include <bits/stdc++.h>
//#define INF 0x3f3f3f3f
//using namespace std;
//
//const int MAXN = 1e5 + 23;
//typedef long long LL;
//typedef vector<int> VI;
//
//vector<vector<int>> threeSum(vector<int>& nums) {
//    sort(nums.begin(), nums.end());
//    int n = nums.size();
//    vector< vector<int> > ret;
//    map<set<int>, int> mvi;
//    for(int i=0; i<n; i++){
//        for(int j=i+1; j<n ;j++){
//            int val = -(nums[i] + nums[j]);
//            int pos = lower_bound(nums.begin(), nums.end(), val)-nums.begin();
//            if(pos != n && nums[pos] == val && pos != i && pos != j){
//                vector<int> vi;
//                set<int> Set;
//                vi.push_back(nums[i]);
//                vi.push_back(nums[j]);
//                vi.push_back(val);
//                Set.insert(nums[i]);
//                Set.insert(nums[j]);
//                Set.insert(val);
//                if(!mvi.count(Set)) {
//                    ret.push_back(vi);
//                    mvi[Set] = 1;
//                }
//            }
//        }
//    }
//    return ret;
//}
//
//int main()
//{
//    vector< vector<int> > vvi;
//    VI nums;
//    nums.push_back(0);
//    nums.push_back(-3);
//    nums.push_back(-4);
//    nums.push_back(-2);
//    nums.push_back(-2);
//    nums.push_back(-1);
//    nums.push_back(1);
//    nums.push_back(-1);
//    nums.push_back(-3);
//    nums.push_back(-2);
//    vvi = threeSum(nums);
//    for(auto x: vvi){
//        for(auto y: x){
//            cout << y << ' ';
//        }
//        cout << endl;
//    }
//    //cout << lower_bound(nums.begin(), nums.end(), 111)-nums.begin() << endl;
//    return 0;
//}
vector<vector<int>> threeSum(vector<int>& nums) {

    vector<vector<int>> res;

    // 对原数组进行排序
    sort(nums.begin(), nums.end());

    if (nums.empty() || nums.back() < 0 || nums.front() > 0) {

        return {};
    }

    for (int k = 0; k < nums.size(); ++k) {

        // 当遍历到正数的时候就break
        if (nums[k] > 0) {

            break;
        }

        if (k > 0 && nums[k] == nums[k - 1]) {

            continue;
        }

        // 对于遍历到的数，用0减去这个fix的数得到一个target
        int target = 0 - nums[k];
        int i = k + 1;
        int j = nums.size() - 1;
        while (i < j) {

            // 用两个指针分别指向fix数字之后开始的数组首尾两个数，如果两个数和正好为target，则将这两个数和fix的数一起存入结果中
            if (nums[i] + nums[j] == target) {

                res.push_back({nums[k], nums[i], nums[j]});
                // 检测重复数字
                while (i < j && nums[i] == nums[i + 1]) {

                    ++i;
                }

                // 检测重复数字
                while (i < j && nums[j] == nums[j - 1]) {

                    --j;
                }

                ++i;
                --j;
            }
            // 如果两数之和小于target，则我们将左边那个指针i右移一位
            else if (nums[i] + nums[j] < target) {

                ++i;
            }
            // 如果两数之和大于target，则我们将右边那个指针j左移一位
            else {

                --j;
            }
        }
    }

    return res;
}
