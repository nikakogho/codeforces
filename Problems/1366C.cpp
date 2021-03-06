#include <bits/stdc++.h>

using namespace std;

int solve()
{
	short n, m;
	cin >> n >> m;
	
	// 0 1 2
	// 1 2 2
	// 2 2 1
	// 2 1 0
	
	bool grid[n][m];
	
	for(short x = 0; x < n; x++) for(short y = 0; y < m; y++) cin >> grid[x][y];
	
	int workSteps = (n + m - 2) / 2 - ((n + m) % 2 == 0);
	
	//cout << workSteps << " worksteps\n";
	
	int count = grid[0][0] != grid[n - 1][m - 1];
	
	set<pair<int, int>> left, right;
	set<pair<int, int>> newLeft, newRight;
	set<pair<int, int>> processed;
	
	left.insert({0, 0});
	right.insert({n - 1, m - 1});
	
	for(int i = 0; i < workSteps; i++)
	{
		int zeroes = 0, ones = 0;
	    
		auto lit = left.begin();
		auto rit = right.begin();
		
		for(; lit != left.end(); lit++, rit++)
		{
			int lx = lit->first;
			int ly = lit->second;
			int rx = rit->first;
			int ry = rit->second;
			
			if(lx == rx && ly == ry) break;
			
			set<pair<int, int>> points = 
			{
				{ lx + 1, ly }, { lx, ly + 1 },
				{ rx - 1, ry }, { rx, ry - 1 }		
			};
			
			if(lx + 1 < n) newLeft.insert({ lx + 1, ly });
			if(ly + 1 < m) newLeft.insert({ lx, ly + 1 });
			
			if(rx > 0) newRight.insert({ rx - 1, ry });
			if(ry > 0) newRight.insert({ rx, ry - 1 });
			
			for(auto point : points)
			{
				int x = point.first, y = point.second;
				if(x < 0 || y < 0 || x == n || y == m) continue;
				
				if(processed.find(point) != processed.end()) continue;
				processed.insert(point);
				
				bool value = grid[point.first][point.second];
				
				if(value) ones++;
				else zeroes++;
			}
		}
		
		//cout << ones << " ones and " << zeroes << " zeroes\n";
		count += ones > zeroes ? zeroes : ones;
		
		left = newLeft;
		right = newRight;
		
		newLeft.clear();
		newRight.clear();
	}
	
	return count;
}

int main()
{
	short t;
	cin >> t;
	while(t--) cout << solve() << endl;
}
