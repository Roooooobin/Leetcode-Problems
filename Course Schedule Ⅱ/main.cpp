#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

//bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
//    unordered_map<int, unordered_set<int>> precourse;
//    for(int i=0; i<prerequisites.size(); i++){
//        precourse[prerequisites[i].first].insert(prerequisites[i].second);
//    }
////    for(auto ite: precourse){
////        cout << ite.first << ": ";
////        for(auto x: ite.second){
////            cout << x << ' ';
////        }
////        cout << endl;
////    }
//    stack<int> vertexes;
//    int* visited = new int[numCourses];
//    for(int i=0; i<numCourses; i++){
//        if(precourse[i].empty()){
//            vertexes.push(i);
//            visited[i] = 1;
//        }
//        else visited[i] = 0;
//    }
//    if(vertexes.empty()) return false;
//    while(!vertexes.empty()){
//        int cur = vertexes.top();
//        vertexes.pop();
//        for(int i=0; i<numCourses; i++){
//            precourse[i].erase(cur);
//            if(precourse[i].empty() && !visited[i]){
//                vertexes.push(i);
//                visited[i] = 1;
//            }
//        }
//    }
//    for(int i=0; i<numCourses; i++){
//        if(!visited[i]) return false;
//    }
//    return true;
//}

vector<int> findOrder(int n, vector<pair<int, int>>& prerequisites)
{
    //i is the precourse of adj[i]
    vector<vector<int>> adj(n, vector<int>());
    //record out-degree
    vector<int> degrees(n, 0);
    for(auto &p: prerequisites){
        adj[p.second].push_back(p.first);
        degrees[p.first]++;
    }
    vector<int> ans;
    queue<int> q;
    for(int i=0; i<n; i++){
        if(degrees[i] == 0) {
            q.push(i);
            ans.push_back(i);
        }
    }
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        n--;
        for(auto next: adj[cur]){
            if(--degrees[next] == 0) {
                q.push(next);
                ans.push_back(next);
            }
        }
    }
    return n == 0? ans: vector<int>();
}

int main()
{
    pair<int, int> p1(0, 2);
    pair<int, int> p2(2, 3);
    pair<int, int> p3(1, 2);
    pair<int, int> p4(3, 4);
    pair<int, int> p5(2, 4);
    pair<int, int> p6(0, 1);
    pair<int, int> p7(1, 0);
    pair<int, int> p8(1, 2);
    vector<pair<int, int>> prerequisites;
    prerequisites.push_back(p1);
    prerequisites.push_back(p2);
    prerequisites.push_back(p3);
    prerequisites.push_back(p4);
    prerequisites.push_back(p5);
//    prerequisites.push_back(p6);
//    prerequisites.push_back(p7);
//    prerequisites.push_back(p8);
    for(auto x: findOrder(5, prerequisites)){
        cout << x << ' ';
    }
    cout << endl;
    return 0;
}
