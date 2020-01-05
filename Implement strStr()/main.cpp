#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

void get_next(string p, int NEXT[])
{
	int pLen = p.size();
	NEXT[0] = -1;
	int k = -1;
	int j = 0;
	while (j < pLen - 1)
	{
		//p[k]表示前缀，p[j]表示后缀
		if (k == -1 || p[j] == p[k])
		{
			++k;
			++j;
			NEXT[j] = k;
		}
		else
		{
			k = NEXT[k];
		}
	}
}

int KMP(string s, string t, int *NEXT)
{
    int i = 0, j = 0;
    int lenS = s.size(), lenT = t.size();
    while(i < lenS && j < lenT){
        if(j == -1 || s[i] == t[j]){
            i++;
            j++;
        }
        else{
            j = NEXT[j];
        }
    }
    if(j == lenT) return i - j;
    else return -1;
}

int strStr(string haystack, string needle) {
    if(needle.size() == 0 && haystack.size() == 0) return 0;
    else if(haystack.size() == 0) return -1;
    else if(needle.size() == 0) return 0;
    int* NEXT = new int[needle.size()];
    get_next(needle, NEXT);
    return KMP(haystack, needle, NEXT);
}

int main()
{
    string s = "hello", t = "lll";
    cout << strStr(s, t) << endl;
    return 0;
}
