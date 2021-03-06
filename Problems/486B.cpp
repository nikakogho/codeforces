#include <bits/stdc++.h>

using namespace std;

void solve()
{
	ios_base::sync_with_stdio(0);
	int w, h;
	cin >> h >> w;
	bool rowno[h], colno[w], rowyes[h], colyes[w];
	bool grid[w][h], answer[w][h];
	for(int i = 0; i < h; i++) rowno[i] = rowyes[i] = 0;
	for(int i = 0; i < w; i++) colno[i] = colyes[i] = 0;
	for(int y = 0; y < h; y++) for(int x = 0; x < w; x++) 
	{
		bool b;
		cin >> b;
		if(!b) rowno[y] = colno[x] = 1;
		answer[x][y] = 0;
		grid[x][y] = b;
	}
	for(int x = 0; x < w; x++) for(int y = 0; y < h; y++)
	{
		if(!grid[x][y]) continue;
		if(rowno[y] && colno[x])
		{
			cout << "NO\n";
			return;
		}
		if(!rowno[y] && !colno[x]) 
			answer[x][y] = rowyes[y] = colyes[x] = 1;
	}
	for(int x = 0; x < w; x++) for(int y = 0; y < h; y++)
		if(grid[x][y] && !rowyes[y] && !colyes[x])
		{
			cout << "NO\n";
			return;
		}
	cout << "YES\n";
	for(int y = 0; y < h; y++)
	{
		for(int x = 0; x < w; x++) cout << answer[x][y] << " ";
		cout << endl;
	}
}

int main()
{
	solve();
}
