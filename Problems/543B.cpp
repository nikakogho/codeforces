#include <bits/stdc++.h>

using namespace std;

int solve()
{
	int n, m;
	cin >> n >> m;
	set<int> paths[n];
	for(int i = 0; i < m; i++)
	{
		int l, r;
		cin >> l >> r;
		l--; r--;
		paths[l].insert(r);
		paths[r].insert(l);
	}
	int dists[n][n];
	const int inf = 1e9;
	for(int start = 0; start < n; start++)
	{
		bool explored[n];
		for(int i = 0; i < n; i++) 
		{
			explored[i] = 0;
			dists[start][i] = inf;
		}
		dists[start][start] = 0;
		set<pair<int, int>> que;
		que.insert({0, start});
		do
		{
			auto top = *que.begin();
			que.erase(que.begin());
			int dist = top.first, vertex = top.second;
			if(explored[vertex]) continue;
			explored[vertex] = 1;
			for(int edge : paths[vertex])
			{
				if(explored[edge]) continue;
				if(dists[start][edge] <= dist + 1) continue;
				dists[start][edge] = dist + 1;
				que.insert({dist + 1, edge});
			}
		}while(que.size());
		//cout << endl;
		//for(int i = 0; i < n; i++)
		//{
		//	cout << "From " << start << " to " << i << " is " << dists[start][i] << endl;
		//}
		//cout << endl;
	}
	int s1, e1, l1, s2, e2, l2;
	cin >> s1 >> e1 >> l1 >> s2 >> e2 >> l2;
	s1--; e1--; s2--; e2--;
	if(dists[s1][e1] > l1 || dists[s2][e2] > l2) return -1;
	pair<int, int> left[] = { { s1, e1, }, { e1, s1 } };
	int totalleft = dists[s1][e1] + dists[s2][e2];
	for(auto l : left)
	{
		int s0 = l.first, e0 = l.second;
		for(int i = 0; i < n; i++) for(int j = 0; j < n; j++)
		{
			int dist1 = dists[s0][i] + dists[i][j] + dists[j][e0];
			int dist2 = dists[s2][i] + dists[i][j] + dists[j][e2];	
			//cout << endl;
			//cout << "For [" << i << ", " << j << "], dist1 = " << dist1 << " and ";
			//cout << "dist2 = " << dist2 << " and interval size is " << dists[i][j];
			//cout << endl;
			if(dist1 > l1 || dist2 > l2) continue;
			totalleft = min(totalleft, dist1 + dist2 - dists[i][j]);
		}
	}
	int ans = m - totalleft;
	if(ans < 0) return -1;
	return ans;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cout << solve();
}
