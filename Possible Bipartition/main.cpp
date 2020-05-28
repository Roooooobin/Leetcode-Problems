#include <bits/stdc++.h>
using namespace std;

//bool dfs(int n, int idx, vector<vector<int>>& dislikes, vector<int>& group) {
//    if (idx == n) return true;
//    int x = dislikes[idx][0];
//    int y = dislikes[idx][1];
//    bool partition1, partition2;
//    if (group[x] == 0 && group[y] == 0) {
//        group[x] = 1;
//        group[y] = 2;
//        partition1 = dfs(n, idx + 1, dislikes, group);
//        group[x] = 2;
//        group[y] = 1;
//        partition2 = dfs(n, idx + 1, dislikes, group);
//        return partition1 || partition2;
//    }
//    else if (group[x] == 0 && group[y] != 0) {
//        group[x] = 3 - group[y];    // 分在不同组
//        return dfs(n, idx + 1, dislikes, group);
//    }
//    else if (group[x] != 0 && group[y] == 0) {
//        group[y] = 3 - group[x];
//        return dfs(n, idx + 1, dislikes, group);
//    }
//    else {
//        if (group[x] == group[y]) return false;
//        else return dfs(n, idx + 1, dislikes, group);
//    }
//}
//
//bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
//    vector<int> group(N+1, 0);
//    return dfs(dislikes.size(), 0, dislikes, group);
//}

// leetcode-886
bool dfs(int i, int color, vector<int>& colors, vector<vector<bool>>& graph) {
    if (colors[i] != 0) {
        return colors[i] == color;
    }
    colors[i] = color;
    for (int j=0; j<colors.size(); ++j) {
        if (graph[i][j] && !dfs(j, -color, colors, graph)) return false;
    }
    return true;
}

bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
    vector<vector<bool>> graph(N, vector<bool>(N, false));
    for (auto& vi: dislikes) {
        graph[vi[0]-1][vi[1]-1] = true;
        graph[vi[1]-1][vi[0]-1] = true;
    }
    vector<int> colors(N, 0);
    for (int i=0; i<N; ++i) {
        if (colors[i] == 0 && !dfs(i, 1, colors, graph)) return false;
    }
    return true;
}

int main() {
    vector<vector<int>> dislikes = {{1, 2}, {1, 3}, {2, 4}};
    cout << possibleBipartition(4, dislikes) << endl;
    return 0;
}
