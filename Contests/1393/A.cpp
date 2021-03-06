#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{
	int n;
	cin >> n;
	int ans = n % 2 == 1 ? ((n + 1) / 2) : (n / 2 + 1);
	cout << ans << endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t; cin >> t; while(t--)
	solve();
	//cout << solve() << endl;
}
