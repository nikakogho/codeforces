#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int grid[n][n];
	for(int y = 0; y < n; y++) for(int x = 0; x < n; x++) cin >> grid[x][y];
	int rowsums[n], colsums[n];
	for(int y = 0; y < n; y++)
	{
		int sum = 0;
		for(int x = 0; x < n; x++) sum += grid[x][y];
		rowsums[y] = sum;
	}
	for(int x = 0; x < n; x++)
	{
		int sum = 0;
		for(int y = 0; y < n; y++) sum += grid[x][y];
		colsums[x] = sum;
	}
	int count = 0;
	for(int x = 0; x < n; x++) for(int y = 0; y < n; y++) 
		if(colsums[x] > rowsums[y]) count++;
	cout << count;
}
