#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ios_base::sync_with_stdio(0);
	int n, m;
	cin >> n >> m;
	bool explored[n + 1];
	for(int i = 2; i <= n; i++) explored[i] = 0;
	set<int> alledges[n + 1];
	while(m--)
	{
		int l, r;
		cin >> l >> r;
		alledges[l].insert(r);
		alledges[r].insert(l);
	}
	int starting = 1;
	int total = 0;
	do
	{
		set<int> toexplore = { starting };
		bool works = 1;
		int vertex;
		do
		{
			vertex = *toexplore.begin();
			toexplore.erase(toexplore.begin());
			explored[vertex] = 1;
			auto edges = alledges[vertex];
			if(edges.size() != 2) works = 0;
			for(int edge : edges)
			{
				int v = edge;
				if(explored[v]) continue;
				toexplore.insert(v);
			}
		}while(!toexplore.empty());
		if(works) total++;
		for(starting++; starting <= n && explored[starting]; starting++);
	}while(starting <= n);
	cout << total;
}
