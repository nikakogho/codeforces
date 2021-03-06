#include <bits/stdc++.h>

using namespace std;

#define ll long long
const int Modulo = 1e9 + 7;

void solve()
{
	int n, h;
	cin >> n >> h;
	int arr[n + 1];
	for(int i = 1; i <= n; i++) cin >> arr[i];
	ll dp[n + 1][n + 1];
	dp[1][0] = (arr[1] == h || arr[1] + 1 == h);
	dp[1][1] = (arr[1] + 1 == h);
	for(int i = 2; i < n + 2; i++) 
		for(int open = max(0, h - arr[i] - 1); open <= min(h - arr[i], i); open++)
		{
			if(arr[i] + open == h)
			{
				dp[i][open] = (dp[i][open] + dp[i - 1][open]) % Modulo;
				if(open > 0) dp[i][open] = (dp[i][open] + dp[i - 1][open - 1]) % Modulo;
			}
			else if(arr[i] + open + 1 == h)
			{
				dp[i][open] += dp[i - 1][open + 1] * (open + 1) + dp[i - 1][open];
				dp[i][open] %= Modulo;
				dp[i][open] += dp[i - 1][open] * open;
				dp[i][open] %= Modulo;
			}
		}
	cout << dp[n][0];
}

int main()
{
	ios_base::sync_with_stdio(0);
	//int t; cin >> t; while(t--) 
	solve();
}
