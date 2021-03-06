#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll n, m;
	cin >> n >> m;
	ll min;
	{
		ll rem = n % m;
		ll x = n / m;
		min = m * x * (x - 1) / 2;
		min += rem * x;
	}
	ll max = 0;
	{
		ll x = n - m + 1;
		max += x * (x - 1) / 2;
	}
	cout << min << " " << max;
}
