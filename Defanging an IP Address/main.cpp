#include <bits/stdc++.h>
using namespace std;

string defangIPaddr(string address) {
    return regex_replace(address, regex("[.]"), "[.]");
}

int main() {
    string address = "1.1.1.1";
    cout << defangIPaddr(address) << endl;
    return 0;
}
