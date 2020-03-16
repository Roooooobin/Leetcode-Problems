#include <bits/stdc++.h>
using namespace std;

vector<int> getNoZeroIntegers(int n) {
    for(int a=1; a<n; ++a){
        int b = n - a;
        if(to_string(a).find('0') == string::npos && to_string(b).find('0') == string::npos){
            return vector<int>{a, b};
        }
    }
    return vector<int>{};   // at least one valid solution
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
