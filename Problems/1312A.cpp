#include <bits/stdc++.h>

using namespace std;

string solve()
{
	short n, m;
	cin >> n >> m;
	return n % m == 0 ? "YES\n" : "NO\n";
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--) cout << solve();
}
