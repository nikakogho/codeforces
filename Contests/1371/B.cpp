#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{
	ll n, r;
	cin >> n >> r;
	ll ans = 0;
	ll reachpoint = min(n - 1, r);
	ans += reachpoint * (reachpoint + 1) / 2;
	if(n <= r) ans++;
	cout << ans << endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t; cin >> t; while(t--) 
	solve();
}
