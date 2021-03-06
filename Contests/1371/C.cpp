#include <bits/stdc++.h>

using namespace std;

#define ll long long

string solve()
{
	ll a, b, n, m;
	cin >> a >> b >> n >> m;
	if(a + b < n + m) return "No";
	ll delta = abs(a - b);
	if(delta > 0) n = max(0ll, n - delta);
	a = b = min(a, b);
	if(m <= n) return "Yes";
	return m <= a ? "Yes" : "No";
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t; cin >> t; while(t--) 
	cout << solve() << endl;
}
