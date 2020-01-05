#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

bool cmp(const Interval& a, const Interval& b)
{
    if(a.start != b.start){
        return a.start < b.start;
    }
    else{
        return a.end < b.end;
    }
}

vector<Interval> merge(vector<Interval>& intervals) {
    if(intervals.empty()) return vector<Interval>{};
    if(intervals.size() == 1) return intervals;
    sort(intervals.begin(), intervals.end(), [](Interval a, Interval b){
             if(a.start != b.start) return a.start < b.start;
             else return a.end < b.end;});
    int st = intervals[0].start;
    int ed = intervals[0].end;
    int n = intervals.size();
    int i = 0;
    vector<Interval> ret;
    while(i < n){
        while(i < n-1 && ed >= intervals[i+1].start){
            ed = max(ed, intervals[i+1].end);
            i++;
        }
        ret.push_back(Interval(st, ed));
        if(i == n-1) break;
        st = intervals[i+1].start;
        ed = intervals[i+1].end;
        i++;
    }
    return ret;
}

int main()
{
    vector<Interval> vi;
    Interval x1(1, 3);
    Interval x2(3, 5);
    Interval x3(5, 7);
    Interval x4(8, 18);
    vi.push_back(x1);
    vi.push_back(x2);
    vi.push_back(x3);
    vi.push_back(x4);
    merge(vi);
    vector<Interval> v = merge(vi);
    for(auto x: v){
        cout << x.start << ' ' << x.end << endl;
    }
    return 0;
}
