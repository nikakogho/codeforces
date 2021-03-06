#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int max = -1000000000;
	while(n--)
	{
		int f, t;
		cin >> f >> t;
		int joy = f;
		if(t > k) joy -= t - k;
		if(joy > max) max = joy;
	}
	cout << max;
}
