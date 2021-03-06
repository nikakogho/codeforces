#include <bits/stdc++.h>

using namespace std;

int main()
{
	char grid[3][3];
	for(int x = 0; x < 3; x++) for(int y = 0; y < 3; y++) cin >> grid[x][y];
	if(grid[0][0] == grid[2][2] && grid[0][1] == grid[2][1] && grid[1][0] == grid[1][2] && grid[2][0] == grid[0][2])
		cout << "YES";
	else cout << "NO";
}
