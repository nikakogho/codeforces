#include <bits/stdc++.h>

using namespace std;

#define ll long long
const int Modulo = 1e9 + 7;

void add(ll& a, ll b)
{
	a = (a + b) % Modulo;
}

int solve()
{
	int n, h;
	cin >> n >> h;
	const int size = 2010;
	ll dp[size][size];
	int arr[n];
	for(int i = 0; i < n; i++) 
	{
		cin >> arr[i];
		if(arr[i] > h) return 0;
	}
	dp[1][0] = arr[0] == h || arr[0] == h - 1;
	dp[1][1] = arr[0] == h - 1;
	for(int i = 2; i <= n + 1; i++)
		for(int open = max(0, h - arr[i - 1] - 1); open <= min(h - arr[i - 1], i); open++)
		{
			if(arr[i - 1] + open == h)
			{
				add(dp[i][open], dp[i - 1][open]);
				if(open) add(dp[i][open], dp[i - 1][open - 1]);
			}
			else if(arr[i - 1] + open + 1 == h)
			{
				add(dp[i][open], dp[i - 1][open + 1] * (open + 1));
				add(dp[i][open], dp[i - 1][open]);
				add(dp[i][open], dp[i - 1][open] * open);
			}
		}
	return dp[n][0];
}

int main()
{
	ios_base::sync_with_stdio(0);
	//int t; cin >> t; while(t--) 
	cout << solve();
}
