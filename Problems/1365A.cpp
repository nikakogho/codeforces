#include <bits/stdc++.h>

using namespace std;

string solve()
{
	int n, m;
	cin >> n >> m;
	bool xFrees[n], yFrees[m];
	int freeRows = n, freeColumns = m;
	for(int i = 0; i < n; i++) xFrees[i] = 1;
	for(int i = 0; i < m; i++) yFrees[i] = 1;
	for(int x = 0; x < n; x++) for(int y = 0; y < m; y++)
	{
		bool b;
		cin >> b;
		if(b)
		{
			if(xFrees[x]) freeRows--;
			if(yFrees[y]) freeColumns--;
			xFrees[x] = yFrees[y] = 0;
		}
	}
	int frees = freeRows > freeColumns ? freeColumns : freeRows;
	return frees % 2 == 0 ? "Vivek" : "Ashish";
}

int main()
{
	ios_base::sync_with_stdio(0);
	
	short t;
	cin >> t;
	while(t--) cout << solve() << endl;
}
