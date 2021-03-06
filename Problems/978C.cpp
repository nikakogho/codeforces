#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll n, m;
	cin >> n >> m;
	ll spots[n];
	for(int i = 0; i < n; i++) cin >> spots[i];
	auto it = spots;
	ll X = 0, N = 1, D = 0;
	while(m--)
	{
		ll x;
		cin >> x;
		ll delta = x - X;
		X = x;
		x = delta;
		while(*it - D < x)
		{
			x -= *it - D;
			D = 0;
			N++;
			it++;
		}
		D += x;
		cout << N << " " << D << endl;
	}
}
