#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{
	int n, k, z;
	cin >> n >> k >> z;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	ll pref = 0, bestindex = 0;
	ll prefs[n];
	int bestind[n];
	int K = k;
	bestind[0] = 0;
	for(int i = 1; i < n - 1; i++) 
	{
		if(arr[i] + arr[i + 1] > arr[bestindex] + arr[bestindex + 1])
			bestindex = i;
		bestind[i] = bestindex;
	}
	if(n > 1)
	bestind[n - 1] = bestind[n - 2];
	for(int i = 0; i < n; i++) prefs[i] = (pref += arr[i]);
	ll ans = prefs[k];
	for(int t = 1; t <= z; t++)
	{
		if(2 * t > k) break;
		ll cur = prefs[k - 2 * t];
		ll best = arr[bestind[k - 2 * t]] + arr[bestind[k - 2 * t] + 1];
		cur += best;
		ans = max(cur, ans);
	}
	cout << ans << endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t; cin >> t; while(t--)
	solve();
}
