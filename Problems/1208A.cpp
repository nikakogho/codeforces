#include <bits/stdc++.h>

using namespace std;

int solve(int a, int b, int n)
{
	if(n % 3 == 0) return a;
	if(n % 3 == 1) return b;
	return a ^ b;
}

int main()
{
	short t;
	cin >> t;
	while(t--)
	{
		int a, b, n;
		cin >> a >> b >> n;
		cout << solve(a, b, n) << endl;
	}
}
