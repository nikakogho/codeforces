#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int xmin = 50, xmax = 0, ymin = 50, ymax = 0;
	char grid[m][n];
	for(int y = 0; y < n; y++) for(int x = 0; x < m; x++)
	{
		char c;
		cin >> c;
		grid[x][y] = c;
		if(c == '.') continue;
		if(x > xmax) xmax = x;
		if(x < xmin) xmin = x;
		if(y > ymax) ymax = y;
		if(y < ymin) ymin = y;
	}
	for(int y = ymin; y <= ymax; y++)
	{
		for(int x = xmin; x <= xmax; x++) cout << grid[x][y];
		cout << endl;
	}
}
