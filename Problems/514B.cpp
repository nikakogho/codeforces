#include <bits/stdc++.h>

using namespace std;

#define ll long long

const double margin = 0.000001;

bool close(double x)
{
	return abs(x) < margin;
}

void solve()
{
	int n, x0, y0;
	cin >> n >> x0 >> y0;
	set<pair<double, double>> lines;
	set<pair<int, int>> troopers;
	while(n--)
	{
		int x, y;
		cin >> x >> y;
		troopers.insert({ x, y });
	}
	int steps = 0;
	do
	{
		steps++;
		auto troop = *troopers.begin();
		double x = troop.first, y = troop.second;
		if(x == x0)
		{
			for(auto it = troopers.begin(); it != troopers.end(); )
			{
				if(it->first == x) troopers.erase(it++);
				else it++;
			}
			continue;
		}
		double k = (y - y0) / (x - x0);
		double b = y - k * x; //k * x + b = y
		//cout << "y = " << k << " * x + " << b << endl;
		for(auto it = troopers.begin(); it != troopers.end(); )
		{
			auto troop = *it;
			x = troop.first;
			y = troop.second;
			if(close(k * x + b - y)) troopers.erase(it++);
			else it++;
		}
	}while(troopers.size() > 0);
	cout << steps;
}

int main()
{
	ios_base::sync_with_stdio(0);
	//int t; cin >> t; while(t--) 
	solve();
}
