#include <bits/stdc++.h>

using namespace std;

#define ll unsigned long long

ll solve(ll l, ll r)
{
	ll power = 0;
	for(int i = 1; l > 0 || r > 0; i++)
	{
		if((l & 1) ^ (r & 1)) power = i;
		l >>= 1; // l /= 2;
		r >>= 1; // r /= 2; 
	}
	return (1LL << power) - 1;
}

int main()
{
	ios_base::sync_with_stdio(0);
	ll l, r;
	cin >> l >> r;
	cout << solve(l, r);
}
