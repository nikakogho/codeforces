#include <bits/stdc++.h>

using namespace std;

const int big = 1e9;

#define Item pair<int, pair<int, int>>

int main()
{
	ios_base::sync_with_stdio(0);
	int n, m, s, exact, ans = 0;
	cin >> n >> m >> s;
	s--;
	map<pair<int, int>, set<int>> roadspots;
	set<pair<int, int>> paths[n];
	bool explored[n];
	int costs[n];
	for(int i = 0; i < n; i++) 
	{
		explored[i] = 0;
		costs[i] = big;
	}
	while(m--)
	{
		int l, r, cost;
		cin >> l >> r >> cost;
		l--; r--;
		paths[l].insert({r, cost});
		paths[r].insert({l, cost});
		set<int> emptyset;
		auto p1 = { l, r };
		auto p2 = { r, l };
		if(roadspots.find(p1) == roadspots.end()) roadspots[p1] = roadspots[p2] = emptyset;
	}
	cin >> exact;
	costs[s] = 0;
	set<Item> spots = { { 0, { s, 0 } } };
	do
	{
		auto beg = spots.begin();
		int basecost = beg->first, vert = beg->second.first, lastcost = beg->second.second;
		spots.erase(beg);
		if(explored[vert]) continue;
		explored[vert] = 1;
		if(costs[vert] == exact) 
		{
			ans++;
			continue;
		}
		if(costs[vert] > exact)
		{
			int dist1 = exact - lastcost;
			int roadcost = basecost - lastcost;
			int dist2 = roadcost - dist1;
			roadspots[]
		}
	}while(spots.size());
	int roadcount = 0;
	for(auto roadspot : roadspot) roadcount += roadspot.second.size();
	roadcount /= 2;
	ans += roadcount;
	cout << ans; 
}
