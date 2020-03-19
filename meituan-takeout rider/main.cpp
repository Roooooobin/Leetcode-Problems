#include <bits/stdc++.h>
using namespace std;

/*
 2110年美团外卖火星第3000号配送站点有26名骑手，分别以大写字母A-Z命名，因此可以称呼这些骑手为黄家骑士特工A，黄家骑士特工B…黄家骑士特工Z，某美团黑珍珠餐厅的外卖流水线上会顺序产出一组包裹，美团配送调度引擎已经将包裹分配到骑手，并在包裹上粘贴好骑手名称，如RETTEBTAE代表一组流水线包裹共9个，同时分配给了名字为A B E R T的5名骑手。请在不打乱流水线产出顺序的情况下，把这组包裹划分为尽可能多的片段，同一个骑手只会出现在其中的一个片段，返回一个表示每个包裹片段的长度的列表。

 输入数据只有一行，为一个字符串(不包含引号)，长度不超过1000，只包含大写字母'A'到'Z'，字符之间无空格

 输出每个分割成片段的包裹组的长度，每个长度之间通过空格隔开
 */

int main() {
    string s = "MPMPCPMCMDEFEGDEHINHKLIN";
    cin >> s;
    vector<vector<int>> rider_pos(26);
    for(int i=0; i<s.size(); ++i){
        rider_pos[s[i]-'A'].push_back(i);
    }
    vector<vector<int>> intervals;
    for(int i=0; i<26; i++){
        if(rider_pos[i].empty()) continue;
        intervals.push_back(vector<int>{rider_pos[i][0], rider_pos[i].back()});
    }
    sort(intervals.begin(), intervals.end(), [](vector<int> a, vector<int> b){
        return a[0] < b[0];
    });
    vector<int> ans;
    int min_ = intervals[0][0], max_ = intervals[0][1];
    for(int i=1; i<intervals.size(); ++i){
        if(intervals[i][0] > max_){
            ans.push_back(max_-min_+1);
            min_ = intervals[i][0];
        }
        max_ = max(max_, intervals[i][1]);
    }
    ans.push_back(max_ - min_ + 1);
    for(int x: ans){
        cout << x << ' ';
    }
    return 0;
}
