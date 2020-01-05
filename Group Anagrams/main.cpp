#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

struct STR
{
    string ori;
    string sorted;
    int index;
};

//vector<vector<string>> groupAnagrams(vector<string>& strs) {
//    int n = strs.size();
//    vector<STR> rets;
//    for(int i=0; i<n; i++){
//        STR v;
//        v.index = i;
//        v.ori = strs[i];
//        v.sorted = strs[i];
//        sort(v.sorted.begin(), v.sorted.end());
//        rets.push_back(v);
//    }
//    map<string, vector<int>> str_index_map;
//    for(int i=0; i<n; i++){
//        str_index_map[rets[i].sorted].push_back(rets[i].index);
//    }
//    map<string, vector<int>>::iterator ite;
//    vector<vector<string>> ans;
//    for(ite=str_index_map.begin(); ite!=str_index_map.end(); ite++){
//        vector<string> vs;
//        for(int i=0; i<(ite->second).size(); i++){
//            vs.push_back(strs[(ite->second)[i]]);
//        }
//        ans.push_back(vs);
//    }
//    return ans;
//}

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    int n = strs.size();
    map<string, vector<string>> str_map;
    for(int i=0; i<n; i++){
        string sorted = strs[i];
        sort(sorted.begin(), sorted.end());
        str_map[sorted].push_back(strs[i]);
    }
    map<string, vector<string>>::iterator ite;
    vector<vector<string>> ans;
    for(ite=str_map.begin(); ite!=str_map.end(); ite++){
        vector<string> vs;
        for(int i=0; i<(ite->second).size(); i++){
            vs.push_back(ite->second[i]);
        }
        ans.push_back(vs);
    }
    return ans;
}

int main()
{
    vector<vector<string>> vvs;
    vector<string> vs;
    vs.push_back("eat");
    vs.push_back("tea");
    vs.push_back("tan");
    vs.push_back("bat");
    vs.push_back("ate");
    vs.push_back("nat");
    vvs = groupAnagrams(vs);
    for(auto vs: vvs){
        for(auto s: vs){
            cout << s << ' ';
        }
        cout << endl;
    }
    return 0;
}
