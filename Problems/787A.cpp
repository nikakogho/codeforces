#include <bits/stdc++.h>

using namespace std;

int solve()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	set<int> x, y;
	for(int i = 0; i < 10000; i++)
	{
		int n = a * i + b;
		int m = c * i + d;
		x.insert(n);
		y.insert(m);
	}
	for(int t : x) if(y.find(t) != y.end()) return t;
	return -1;
}

int main()
{
	cout << solve();
}
