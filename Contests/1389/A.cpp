#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int l, r;
	cin >> l >> r;
	if(l * 2 > r)
	cout << "-1 -1" << endl;
	else
	{
		int x = l;
		int y = 2 * x;
		cout << x << " " << y << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t; cin >> t; while(t--)
	solve();
}
