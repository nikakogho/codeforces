#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ios_base::sync_with_stdio(0);
	int n, m;
	cin >> n >> m;
	ll inf = 1000000000000;
	bool explored[n + 1];
	for(int i = 2; i <= n; i++) explored[i] = 0;
	set<int> alledges[n + 1];
	int costs[n + 1];
	for(int i = 1; i <= n; i++) cin >> costs[i];
	while(m--)
	{
		int l, r, cost;
		cin >> l >> r;
		alledges[l].insert(r);
		alledges[r].insert(l);
	}
	int starting = 1;
	ll total = 0;
	do
	{
		ll cost = costs[starting];
		set<int> toexplore = { starting };
		do
		{
			int vertex = *toexplore.begin();
			toexplore.erase(toexplore.begin());
				explored[vertex] = 1;
				if(costs[vertex] < cost) cost = costs[vertex];
				auto edges = alledges[vertex];
				for(int edge : edges)
				{
					int v = edge;
					if(explored[v]) continue;
					toexplore.insert(v);
				}
		}while(!toexplore.empty());
		total += cost;
		for(starting++; starting <= n && explored[starting]; starting++);
	}while(starting <= n);
	cout << total;
}
