#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

int leastInterval(vector<char>& tasks, int n) {
    vector<int> char_tble(26);
    for(auto c: tasks){
        char_tble[c-'A']++;
    }
    sort(char_tble.begin(), char_tble.end());
    int _max = char_tble[25];
    int idle = (_max - 1) * n;
    for(int i=24; i>=0 && char_tble[i]>0; i--){
        idle -= min(_max-1, char_tble[i]);
    }
    return idle > 0? tasks.size()+idle: tasks.size();
}

int main()
{
    vector<char> tasks = {'A','A','A','B','B','B'};
    cout << leastInterval(tasks, 3) << endl;
    return 0;
}
