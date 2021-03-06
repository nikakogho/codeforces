#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Modulo 1000000007

int solve()
{
	ll n;
	cin >> n;
	if(n == 1) return 0;
	if(n == 2) return 3;
	ll a = 1, b = 0, c = 0;
	while(n--)
	{
		c = a;
		a = b;
		b = 3 * c + 2 * b;
		b %= Modulo;
	}
	return a;
}

int main()
{
	cout << solve();
}
