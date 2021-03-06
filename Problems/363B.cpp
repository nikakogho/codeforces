#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{
	int n, k;
	cin >> n >> k;
	int best = 0;
	int ind = 0;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	for(int i = 0; i < k; i++) best += arr[i];
	int sum = best;
	for(int i = 1; i + k <= n; i++)
	{
		sum += arr[i + k - 1] - arr[i - 1];
		if(sum < best)
		{
			best = sum;
			ind = i;
		}
	}
	int ans = ind + 1;
	cout << ans;
}

int main()
{
	ios_base::sync_with_stdio(0);
	//int t; cin >> t; while(t--) 
	solve();
}
