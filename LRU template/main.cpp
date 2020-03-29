#include <bits/stdc++.h>
using namespace std;

class LRUCache {
private:
    int size;
    list<int> lru;
    unordered_map<int, list<int>::iterator> k2iter;
    unordered_map<int, int> k2v;

public:
    LRUCache(int capacity) {
        size = capacity;
    }

    int get(int key) {
        if(!k2v.count(key)) return -1;
        update(key);
        return k2v[key];
    }

    void put(int key, int value) {
        if(k2v.size() == size && !k2v.count(key)){
            pop();
        }
        update(key);
        k2v[key] = value;
    }

    void update(int key){
        if(k2v.count(key)){
            lru.erase(k2iter[key]);
        }
        lru.push_front(key);
        k2iter[key] = lru.begin();
    }

    void pop(){
        k2iter.erase(lru.back());
        k2v.erase(lru.back());
        lru.pop_back();
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
