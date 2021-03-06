#include <bits/stdc++.h>

using namespace std;

int solve()
{
	int n;
	cin >> n;
	if(n == 0) return 1;
	switch(n % 4)
	{
		case 0: return 6;
		case 1: return 8;
		case 2: return 4;
		default: return 2;
	}	
}

int main()
{
	cout << solve();
}
