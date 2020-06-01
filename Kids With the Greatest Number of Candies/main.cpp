#include <bits/stdc++.h>
using namespace std;

// leetcode-1431 by Robin
vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    int largest = candies[0];
    for (int i=1; i<candies.size(); ++i) largest = max(largest, candies[i]);
    vector<bool> ans;
    int target = largest - extraCandies;
    for (int candie : candies) {
        ans.push_back(candie >= target);
    }
    return ans;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
