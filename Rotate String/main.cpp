#include <bits/stdc++.h>
using namespace std;

bool rotateString(string A, string B) {
    string AA = A + A;
    cout << AA.find(B) << endl;
    return A.size() == B.size() && AA.find(B) != -1;
}

/*
 * Rolling Hash
For a string S, say hash(S) = (S[0] * P**0 + S[1] * P**1 + S[2] * P**2 + ...) % MOD, where X**Y represents exponentiation, and S[i] is the ASCII character code of the string at that index.

The idea is that hash(S) has output that is approximately uniformly distributed between [0, 1, 2, ..., MOD-1], and so if hash(S) == hash(T) it is very likely that S == T.

Now say we have a hash hash(A), and we want the hash of A[1], A[2], ..., A[N-1], A[0]. We can subtract A[0] from the hash, divide by P, and add A[0] * P**(N-1). (Our division is under the finite field \mathbb{F}_\text{MOD}F
MOD
​
  - done by multiplying by the modular inverse Pinv = pow(P, MOD-2, MOD).)
 */

int main() {
    cout << rotateString("abc", "bac");
    return 0;
}
