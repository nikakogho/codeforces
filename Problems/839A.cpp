#include <bits/stdc++.h>

using namespace std;

int solve()
{
	short n, k;
	cin >> n >> k;
	short sum = 0;
	for(int i = 1; i <= n; i++)
	{
		short x;
		cin >> x;
		sum += x;
		short toGive = sum > 8 ? 8 : sum;
		k -= toGive;
		sum -= toGive;
		if(k <= 0) return i;
	}
	return -1;
}

int main()
{
	cout << solve();
}
