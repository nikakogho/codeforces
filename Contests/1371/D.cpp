#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{
	int n, k;
	cin >> n >> k;
	bool grid[n][n];
	for(int x = 0; x < n; x++) for(int y = 0; y < n; y++) grid[x][y] = 0;
	for(int startx = 0, i = 0; startx < n && i < k; startx++)
	{
		for(int y = 0; y < n && i < k; y++, i++)
		{
			int x = (y + startx) % n;
			grid[x][y] = 1;
		}
	}
	short delta = k % n == 0 ? 0 : 2;
	cout << delta << endl;
	for(int y = 0; y < n; y++)
	{
		for(int x = 0; x < n; x++) cout << grid[x][y];
		cout << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t; cin >> t; while(t--) 
	solve();
}
