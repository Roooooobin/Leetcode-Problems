#include <bits/stdc++.h>
using namespace std;

// leetcode-380 by Robin
class RandomizedSet {
private:
    vector<int> v;
    unordered_map<int, int> hash;

public:
    /** Initialize your data structure here. */
    RandomizedSet() {

    }

    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(!hash.count(val)){
            v.push_back(val);
            hash[val] = v.size()-1;
            return true;
        }
        else return false;
    }

    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(hash.count(val)){
            int back = v.back();
            v[hash[val]] = back;
            hash[back] = hash[val];
            hash.erase(val);
            v.pop_back();
            return true;
        }
        else return false;
    }

    /** Get a random element from the set. */
    int getRandom() {
        return v[rand()%v.size()];
    }
};

int main() {
    RandomizedSet* obj = new RandomizedSet();
    bool b1 = obj->insert(2);
    bool b2 = obj->insert(3);
    bool b3 = obj->insert(4);
    bool b4 = obj->remove(4);
    bool b5 = obj->remove(2);
    cout << obj->getRandom() << endl;
    cout << obj->getRandom() << endl;
    cout << obj->getRandom() << endl;
    return 0;
}
