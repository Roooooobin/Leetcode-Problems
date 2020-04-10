#include <bits/stdc++.h>
using namespace std;

// leetcode-295 by Robin
class MedianFinder {
private:
    priority_queue<int> A;
    priority_queue<int, vector<int>, greater<int>> B;
public:
    /** initialize your data structure here. */
    MedianFinder() {

    }

    void addNum(int x) {
        if(A.empty()){
            A.push(x);
        }
        else if(x > A.top()){
            if(B.size() > A.size()){
                if(x > B.top()){
                    A.push(B.top());
                    B.pop();
                    B.push(x);
                }
                else{
                    A.push(x);
                }
            }
            else{
                B.push(x);
            }
        }
        else{
            if(A.size() >= B.size()){
                B.push(A.top());
                A.pop();
                A.push(x);
            }
            else{
                A.push(x);
            }
        }
    }

    double findMedian() {
        int n1 = A.size(), n2 = B.size();
        if(B.empty() && A.empty()) return 0;
        if(B.empty()){
            return A.top();
        }
        else if(A.empty()){
            return B.top();
        }
        else if((n1 + n2) % 2 == 0){
            return (A.top() + B.top()) / 2.0;
        }
        else{
            return B.top() * 1.0;
        }
    }
};

int main() {
    MedianFinder* obj = new MedianFinder();
    obj->addNum(1);
    cout << obj->findMedian() << endl;
    obj->addNum(2);
    cout << obj->findMedian() << endl;
    obj->addNum(3);
    double param_2 = obj->findMedian();
    cout << param_2 << endl;
    return 0;
}
