#include <bits/stdc++.h>
using namespace std;

vector<int> asteroidCollision(vector<int>& asteroids) {
    stack<int> sc;
    for(int x: asteroids){
        if(!sc.empty() && x < 0){
            bool flag = true;
            while(!sc.empty() && sc.top() > 0){
                if(sc.top() + x < 0){
                    sc.pop();
                }
                else if(sc.top() + x == 0){
                    sc.pop();
                    flag = false;
                    break;
                }
                else{
                    flag = false;
                    break;
                }
            }
            if(flag){
                sc.push(x);
            }
        }
        else{
            sc.push(x);
        }
    }
    vector<int> ans;
    while(!sc.empty()){
        ans.push_back(sc.top());
        sc.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    vector<int> as = {8, -8};
    vector<int> ans = asteroidCollision(as);
    for(auto x: ans){
        cout << x << ' ';
    }
    return 0;
}
