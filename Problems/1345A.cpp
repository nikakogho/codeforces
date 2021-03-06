#include <bits/stdc++.h>

using namespace std;

string solve()
{
	int x, y;
	cin >> x >> y;
	return x == 1 || y == 1 || (x == 2 && y == 2) ? "YES" : "NO";
}

int main()
{
	int t;
	cin >> t;
	while(t--) cout << solve() << endl;
}
