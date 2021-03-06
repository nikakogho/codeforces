#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define inf 10000000000000000LL

int main()
{
	ios_base::sync_with_stdio(0);
	int n, m;
	cin >> n >> m;
	ll paths[n + 1];
	bool explored[n + 1];
	explored[1] = paths[1] = 0;
	for(int i = 2; i <= n; i++) explored[i] = 0, paths[i] = inf;
	set<pair<int, int>> edges[n + 1];
	while(m--)
	{
		int l, r, cost;
		cin >> l >> r >> cost;
		edges[l].insert({r, cost});
		edges[r].insert({l, cost});
	}
	set<pair<int, int>> vertices = { { 0, 1 } };
	do
	{
		int vertex = vertices.begin()->second;
		vertices.erase(vertices.begin());
		if(explored[vertex]) continue;
		ll base = paths[vertex];
		explored[vertex] = 1;
		for(auto edge : edges[vertex])
		{
			int v = edge.first;
			int c = edge.second;
			if(explored[v]) continue;
			if(paths[v] > base + c) paths[v] = base + c;
			vertices.insert({ paths[v], v });
		}
	}while(!vertices.empty());
	if(paths[n] == inf) cout << -1;
	else cout << paths[n];
}
