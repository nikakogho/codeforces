#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n, m;
	cin >> n >> m;
	int left[m + 1][n + 1];  //bounds
	int right[m + 1][n + 1]; //bounds
	for(int y = 1; y <=l n; y++)
	{
		int k;
		cin >> k;
		while(k--)
		{
			int l, r;
			cin >> l >> r;
			for(int x = l; x <= r; x++)
			{
				left[x][y] = l;
				right[x][y] = r;
			}
		}
	}
	int dp[m + 2][m + 2];
	for(int i = 0; i < m + 2; i++) for(int j = 0; j < m + 2; j++)
		dp[i][j] = 0;
	for(int l = m; l >= 1; l--) for(int r = l; r <= m; r++)
	{
		for(int x = l; x <= r; x++)
		{
			int q = 0;
			for(int y = 1; y <= n; y++)
				if(left[x][y] >= l && right[x][y] <= r) q++; //in bounds
			int second = dp[l][x - 1] + q * q + dp[x + 1][r];
			dp[l][r] = max(dp[l][r], second);
		}
	}
	int answer = dp[1][m];
	cout << answer;
}

int main()
{
	ios_base::sync_with_stdio(0);
	//int t; cin >> t; while(t--)
	solve();
}
