#include <bits/stdc++.h>

using namespace std;

void solve()
{
	short n, m, a, b;
	cin >> n >> m >> a >> b;
	if(n * a != m * b)
	{
		cout << "NO" << endl;
		return;
	}
	cout << "YES" << endl;
	bool grid[m][n];
	for(short x = 0; x < m; x++) for(short y = 0; y < n; y++) grid[x][y] = 0;
	short Y = 0;
	for(short x = 0; x < m; x++)
	{
		for(int i = 0; i < b; i++)
		{
			grid[x][Y] = 1;
			Y++;
			if(Y == n) Y = 0;
		}
	}
	for(short y = 0; y < n; y++)
	{
		for(short x = 0; x < m; x++) cout << grid[x][y];
		cout << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	short t;
	cin >> t;
	while(t--) solve();
}
