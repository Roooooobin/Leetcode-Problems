#include <bits/stdc++.h>
using namespace std;

// leetcode-1046 by Robin
int lastStoneWeight(vector<int>& stones) {
    priority_queue<int> pq;
    for(int x: stones){
        pq.push(x);
    }
    while(pq.size() >= 2){
        int x1 = pq.top();
        pq.pop();
        int x2 = pq.top();
        pq.pop();
        if(x1 > x2){
            pq.push(x1-x2);
        }
    }
    return pq.empty()? 0: pq.top();
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
