#include <bits/stdc++.h>

using namespace std;

int main()
{
	short p, n;
	cin >> p >> n;
	short conflict = -1;
	short bucket[p];
	for(short i = 0; i < p; i++) bucket[i] = -1;
	for(int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		int index = x % p;
		if(bucket[index] == -1) bucket[index] = 0;
		else
		{
			conflict = i + 1;
			break;
		}
	}
	cout << conflict;
}
