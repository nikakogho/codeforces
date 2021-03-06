#include <bits/stdc++.h>

using namespace std;

const int N = 5000;

int dp[N];
int _next[N];
pair<int, int> arr[N];
int n, W, H;

int getdp(int index)
{
	auto p = arr[index];
	int w = p.first, h = p.second;
	if(w <= W || h <= H) return 0;
	if(dp[index] == -1)
	{
		dp[index] = 1;
		for(int i = 0; i < n; i++)
		{
			if(arr[i].first <= w || arr[i].second <= h) continue;
			int ans = 1 + getdp(i);
			if(ans > dp[index])
			{
				dp[index] = ans;
				_next[index] = i;
			}
		}
	}
	return dp[index];
}

void solve()
{
	cin >> n >> W >> H;
	for(int i = 0; i < n; i++) cin >> arr[i].first >> arr[i].second;
	memset(dp, -1, sizeof(dp));
	int size = 0, index = 0;
	for(int i = 0; i < n; i++)
	{
		getdp(i);
		if(size < dp[i])
		{
			size = dp[i];
			index = i;
		}
	}
	cout << size << endl;
	for(int i = 0; i < size; i++)
	{
		cout << (index + 1) << " ";
		index = _next[index];
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	solve();
}
