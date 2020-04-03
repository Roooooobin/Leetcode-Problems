#include <iostream>

// leetcode-1323
int maximum69Number (int num) {
    string s_num = to_string(num);
    for(char& c: s_num){    // use reference to modify in-place
        if(c == '6'){
            c = '9';
            break;
        }
    }
    return stoi(s_num);
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
