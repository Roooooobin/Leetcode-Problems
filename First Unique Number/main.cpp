#include <bits/stdc++.h>
using namespace std;

// leetcode-dailyProblem-First Unique Number
class FirstUnique {
private:
    unordered_map<int, int> hash;
    queue<int> q;
public:
    FirstUnique(vector<int>& nums) {
        for(int x: nums){
            if(hash.count(x)){
                hash[x] += 1;
            }
            else{
                hash[x] = 1;
            }
        }
        for(int x: nums){
            if(hash[x] == 1){
                q.push(x);
            }
        }
    }

    int showFirstUnique() {
        while(!q.empty()){
            if(hash[q.front()] > 1){
                q.pop();
            }
            else break;
        }
        if(q.empty()) return -1;
        else return q.front();
    }

    void add(int value) {
        if(hash.count(value)){
            hash[value] += 1;
        }
        else{
            hash[value] = 1;
            q.push(value);
        }
    }
};

int main() {
    vector<int> nums = {2, 5, 5, 3};
    FirstUnique *obj = new FirstUnique(nums);
    cout << obj->showFirstUnique() << endl;
    obj->add(2);
    cout << obj->showFirstUnique() << endl;
    cout << obj->showFirstUnique() << endl;
    cout << obj->showFirstUnique() << endl;
    obj->add(3);
    cout << obj->showFirstUnique() << endl;
    return 0;
}
