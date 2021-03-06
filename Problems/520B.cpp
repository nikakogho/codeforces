#include <bits/stdc++.h>

using namespace std;

int reach(int n, int m)
{
	if(n >= m) return n - m;
	return 1 + m % 2 + reach(n, (m + 1) / 2);
}

int main()
{
	int n, m;
	cin >> n >> m;
	cout << reach(n, m);
}
