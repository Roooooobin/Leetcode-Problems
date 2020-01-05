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

    // ��ԭ�����������
    sort(nums.begin(), nums.end());

    if (nums.empty() || nums.back() < 0 || nums.front() > 0) {

        return {};
    }

    for (int k = 0; k < nums.size(); ++k) {

        // ��������������ʱ���break
        if (nums[k] > 0) {

            break;
        }

        if (k > 0 && nums[k] == nums[k - 1]) {

            continue;
        }

        // ���ڱ�������������0��ȥ���fix�����õ�һ��target
        int target = 0 - nums[k];
        int i = k + 1;
        int j = nums.size() - 1;
        while (i < j) {

            // ������ָ��ֱ�ָ��fix����֮��ʼ��������β�����������������������Ϊtarget��������������fix����һ���������
            if (nums[i] + nums[j] == target) {

                res.push_back({nums[k], nums[i], nums[j]});
                // ����ظ�����
                while (i < j && nums[i] == nums[i + 1]) {

                    ++i;
                }

                // ����ظ�����
                while (i < j && nums[j] == nums[j - 1]) {

                    --j;
                }

                ++i;
                --j;
            }
            // �������֮��С��target�������ǽ�����Ǹ�ָ��i����һλ
            else if (nums[i] + nums[j] < target) {

                ++i;
            }
            // �������֮�ʹ���target�������ǽ��ұ��Ǹ�ָ��j����һλ
            else {

                --j;
            }
        }
    }

    return res;
}
