#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{
	ll n;
	cin >> n;
	ll ans = n / 2 + n % 2;
	cout << ans << endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t; cin >> t; while(t--) 
	solve();
}
