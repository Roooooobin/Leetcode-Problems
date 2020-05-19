#include <bits/stdc++.h>
using namespace std;

// leetcode-901 by Robin
class StockSpanner {
private:
    stack<int> prices;
    stack<int> curSpans;
public:
    StockSpanner() {

    }

    int next(int price) {
        int span = 1;
        while (!prices.empty() && prices.top() <= price) {
            span += curSpans.top();
            prices.pop();
            curSpans.pop();
        }
        prices.push(price);
        curSpans.push(span);
        return span;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
