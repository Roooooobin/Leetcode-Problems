#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

bool buddyStrings(string A, string B) {
    int lenA = A.size();
    int lenB = B.size();
    if(lenA != lenB) return false;
    //���AB�����A���ظ��ģ�˵�����Գɹ�����
    int numChar_A = unordered_set<char>(A.begin(), A.end()).size();
    if (A == B && numChar_A < len_B) return true;
    vector<int> index_diff;
    for(int i=0; i<lenA; i++){
        if(A[i] != B[i]){
            index_diff.push_back(i);
        }
        if(index_diff.size() > 2) return false;
    }
    return index_diff.size() == 2
           && A[index_diff[0]] == B[index_diff[1]]
           && A[index_diff[1]] == B[index_diff[0]];
}

int main()
{

    return 0;
}
