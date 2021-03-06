#include <bits/stdc++.h>

using namespace std;

const int N = 5001;
int n, m, s;
set<int> fromto[N];
set<int> tofrom[N];
int needs = 0;
bool explored[N];
set<int> unexplored;

int gethead(int start)
{
	set<int> cycle;
	int lastadded = start;
	for(; cycle.find(start) == cycle.end(); start = *tofrom[start].begin()) cycle.insert(lastadded = start);
	for(int part : cycle)
	{
		auto tofroms = tofrom[part];
		if(tofroms.size() == 1) continue;
		auto it = tofroms.begin();
		for(it++; it != tofroms.end(); it++) 
		{
			int city = *it;
			if(cycle.find(city) == cycle.end()) return gethead(city);
		}
	}
	return lastadded;
}

void solve()
{
	cin >> n >> m >> s;
	for(int i = 1; i <= n; i++)
	{
		explored[i] = 0;
		unexplored.insert(i);
	}
	for(int i = 0; i < m; i++)
	{
		int l, r;
		cin >> l >> r;
		fromto[l].insert(r);
		tofrom[r].insert(l);
	}
	//cout << "16 has " << fromto[16].size() << endl;
	set<int> spots = { s };
	do
	{
		int spot = *spots.begin();
		spots.erase(spots.begin());
		explored[spot] = 1;
		unexplored.erase(spot);
		for(int site : fromto[spot])
		{
			if(explored[site]) continue;
			spots.insert(site);
		}
	}while(spots.size() > 0);
	//cout << "Capital explored" << endl;
	for(int i = 1; i <= n; i++) //frees
	{
		if(explored[i]) continue;
		if(tofrom[i].size() > 0) continue;
		spots.insert(i);
		do
		{
			int spot = *spots.begin();
			//cout << "Spot is " << spot << endl;
			spots.erase(spots.begin());
			explored[spot] = 1;
			unexplored.erase(spot);
			for(int site : fromto[spot])
			{
				if(explored[site]) continue;
				spots.insert(site);
			}
		}while(spots.size() > 0);
		needs++;
	}
	for(; unexplored.size() > 0; needs++) //cycles
	{
		int start = gethead(*unexplored.begin());
		spots.insert(start);
		do
		{
			int spot = *spots.begin();
			//cout << "Spot is " << spot << endl;
			spots.erase(spots.begin());
			explored[spot] = 1;
			unexplored.erase(spot);
			for(int site : fromto[spot])
			{
				if(explored[site]) continue;
				spots.insert(site);
			}
		}while(spots.size() > 0);
	}
	cout << needs << endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	solve();
}
