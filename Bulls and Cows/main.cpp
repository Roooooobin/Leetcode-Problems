#include <bits/stdc++.h>
#include <string>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

string getHint(string secret, string guess) {
    int tble[61] = {};
    int n = secret.size();
    int bulls = 0;
    int cows = 0;
    for(int i=0; i<n; i++){
        tble[secret[i]]++;
        if(guess[i] == secret[i]){
            bulls++;
            tble[secret[i]]--;
        }
    }
    for(int i=0; i<n; i++){
        if(guess[i] != secret[i] && tble[guess[i]]){
            tble[guess[i]]--;
            cows++;
        }
    }
    cout << bulls << ' ' << cows << endl;
//    string ans;
//    stringstream ss1;
//    ss1 << bulls;
//    string s1 = ss1.str();
//    stringstream ss2;
//    ss2 << cows;
//    string s2 = ss2.str();
//    ans += s1;
//    ans += 'A';
//    ans += s2;
//    ans += 'B';
    return to_string(bulls) + 'A' + to_string(cows) + 'B';
}

int main()
{
    string s = "00112233445566778899";
    string g = "16872590340158679432";
    cout << getHint(s, g) << endl;
    return 0;
}


