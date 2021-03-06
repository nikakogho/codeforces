#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{
	int n, m, cx, cy;
	cin >> n >> m >> cx >> cy;
	ll cost = 0;
	if(cx * 2 <= cy) for(int y = 0; y < n; y++)
	{
		string s;
		cin >> s;
		for(int x = 0; x < m; x++) if(s[x] == '.') cost += cx;
	}
	else for(int y = 0; y < n; y++)
	{
		string s;
		cin >> s;
		for(int x = 0; x < m; x++)
		{
			if(s[x] == '*') continue;
			if(x < m - 1 && s[x + 1] == '.')
			{
				cost += cy;
				x++;
			}
			else cost += cx;
		}
	}
	cout << cost << endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t; cin >> t; while(t--) 
	solve();
}
