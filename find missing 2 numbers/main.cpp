#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5 + 23;
typedef long long LL;
typedef vector<int> VI;

void find_missing_number2 (int a[], int size, int& miss1, int& miss2)
{
	miss1 = 0;
	miss2 = 0;
	int number=0;
	for (int i=0;i<size;i++)
		number ^= ((i+1)^a[i]);
	number ^= (size+1);
	number ^= (size+2);

	// now number will be miss1^miss2
	// find the binary 1 in number
	cout << number << endl;
	int k = number - (number&(number-1));
	cout << k << endl;
	for (int i=0;i<size;i++)
	{
		if ( (i+1)&k )
			miss1 ^= (i+1);
		if ( a[i]&k )
			miss1 ^= a[i];
	}
	if ( (size+1) & k )
		miss1 ^= size+1;
	if ( (size+2) & k )
		miss1 ^= size+2;
	miss2 = number ^ miss1;
}

int main()
{
    int a[] = {1, 2, 3, 4, 6, 7};
    int miss1;
    int miss2;
    find_missing_number2(a, 6, miss1, miss2);
    cout << miss1 << ' ' << miss2 << endl;
    return 0;
}
