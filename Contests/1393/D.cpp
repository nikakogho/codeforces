#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll solve()
{
	int h, w;
	cin >> h >> w;
	char grid[w][h];
	int levels[w][h];
	for(int y = 0; y < h; y++)
	{
		string s;
		cin >> s;
		for(int x = 0; x < w; x++) 
		{
			levels[x][y] = 1;
			grid[x][y] = s[x];
		}
	}
	//ll ans = h * w;
	for(int x = 1; x < w - 1; x++)
	{
		int startlevel = 1;
		for(int d = 0; d < h - 1; d++)
		{
			char c = grid[x][d];
			if(grid[x][d + 1] != c)
			{
				startlevel = 1;
				continue;
			}
			int level = startlevel;
			for(; ; level++)
			{
				int o = d + level;
				int l = x - level, r = x + level, u = o + level;
				if(l < 0 || r == w || u == h) break;
				if(grid[x][u] != c) break;
				bool works = 1;
				for(int i = 0; i <= level; i++)
				{
					if(grid[l + i][o + i] != c || grid[l + i + 1][o + i] != c
					|| grid[r - i][o + i] != c || grid[r - i - 1][o + i] != c)
					{
						works = 0;
						break;
					}
				}
				if(!works) break;
			}
			levels[x][d] = level;
			startlevel = level - 1;
		}
	}
	ll ans = 0;
	for(int x = 0; x < w; x++) for(int y = 0; y < h; y++) ans += levels[x][y];
	return ans;
}

int main()
{
	ios_base::sync_with_stdio(0);
	//int t; cin >> t; while(t--)
	//solve();
	cout << solve() << endl;
}
