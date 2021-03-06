#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ios_base::sync_with_stdio(0);
	int n, m, k;
	cin >> n >> m >> k;
	set<int> homes;
	for(int i = 0; i < k; i++) 
	{
		int x;
		cin >> x;
		homes.insert(x);
	}
	bool explored[n + 1];
	for(int i = 1; i <= n; i++) explored[i] = 0;
	set<int> alledges[n + 1];
	while(m--)
	{
		int l, r;
		cin >> l >> r;
		alledges[l].insert(r);
		alledges[r].insert(l);
	}
	int starting = 1;
	ll total = 0;
	ll maxk = 0, totalfrees = 0;
	do
	{
		set<int> toexplore = { starting };
		ll edgecount = 0;
		ll vertices = 0;
		bool home = 0;
		int vertex;
		//cout << "vertices: ";
		do
		{
			vertex = *toexplore.begin();
			toexplore.erase(toexplore.begin());
			auto edges = alledges[vertex];
			if(!explored[vertex])
			{
				vertices++;
				//cout << vertex << " ";
				edgecount += edges.size();
				if(homes.find(vertex) != homes.end()) home = 1;
			}
			explored[vertex] = 1;
			for(int edge : edges)
			{
				int v = edge;
				if(explored[v]) continue;
				toexplore.insert(v);
			}
		}while(!toexplore.empty());
		//cout << endl;
		ll maxedges = vertices > 2 ? (vertices + vertices * (vertices - 3) / 2) : (vertices == 2 ? 1 : 0);
		edgecount /= 2;
		total += maxedges - edgecount;
		//cout << edgecount << " edges, " << vertices << " vertices and " << home << " home" << endl;
		if(home)
		{
			if(vertices > maxk) maxk = vertices;
		}
		else total += totalfrees * vertices, totalfrees += vertices;
		for(starting++; starting <= n && explored[starting]; starting++);
	}while(starting <= n);
	total += maxk * totalfrees;
	//cout << maxk << " maxk and " << totalfrees << " total frees" << endl;
	cout << total;
}
