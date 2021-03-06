#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ios_base::sync_with_stdio(0);
	int n, m;
	cin >> n >> m;
	ll inf = 1000000000000;
	int parents[n + 1];
	ll paths[n + 1];
	bool explored[n + 1];
	parents[0] = parents[1] = 0;
	paths[1] = 0;
	for(int i = 2; i <= n; i++) paths[i] = inf, explored[i] = parents[i] = 0;
	vector<pair<int, int>> alledges[n + 1];
	while(m--)
	{
		int l, r, cost;
		cin >> l >> r >> cost;
		alledges[l].push_back({ r, cost });
		alledges[r].push_back({ l, cost });
	}
	set<pair<int, int>> toexplore = { { 0, 1 } };
	do
	{
		auto p = *toexplore.begin();
		toexplore.erase(toexplore.begin());
			int vertex = p.second;
			int basecost = p.first;
			if(vertex == n) break;
			explored[vertex] = 1;
			auto edges = alledges[vertex];
			for(auto edge : edges)
			{
				int v = edge.first;
				if(explored[v]) continue;
				int cost = edge.second + basecost;
				toexplore.insert({ cost, v });
				if(paths[v] > cost)
				{
					paths[v] = cost;
					parents[v] = vertex;
				}
			}
	}while(!toexplore.empty());
	vector<int> s;
	if(parents[n] == 0) s.push_back(-1);
	else for(int v = n; v > 0; v = parents[v]) s.push_back(v);
	for(int i = s.size() - 1; i >= 0; i--) cout << s[i] << " ";
}
