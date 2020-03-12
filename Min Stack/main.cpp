#include <bits/stdc++.h>
using namespace std;

class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> s1;
    stack<int> s2;    //s2.top stores the minimum
    MinStack() {

    }

    void push(int x) {
        s1.push(x);
        if(s2.empty() || x <= s2.top()) s2.push(x);
    }

    void pop() {
        if(s1.top() == s2.top()) s2.pop();
        s1.pop();
    }

    int top() {
        return s1.top();
    }

    int getMin() {
        return s2.top();
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
