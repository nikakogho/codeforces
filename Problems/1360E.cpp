#include <bits/stdc++.h>

using namespace std;

string solve()
{
	short n;
	cin >> n;
	string grid[n];
	for(short x = 0; x < n; x++) cin >> grid[x];
	for(short x = 0; x < n - 1; x++) for(short y = 0; y < n - 1; y++)
		if(grid[x][y] == '1' && grid[x + 1][y] == '0' && grid[x][y + 1] == '0' ) return "NO";
	return "YES";
}

int main()
{
	short t;
	cin >> t;
	while(t--) cout << solve() << endl;
}
