#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{
	int n;
	cin >> n;
	pair<int, int> xy[n], yx[n];
	map<pair<int, int>, int> spots;
	for(int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		xy[i] = { x, y };
		yx[i] = { y, x };
		spots[{x, y}]++;
	}
	sort(xy, xy + n);
	sort(yx, yx + n);
	ll ans = 0;
	int big = 1e9;
	int lastx = -big - 1;
	ll count = 0;
	for(int i = 0; i < n; i++)
	{
		int x = xy[i].first;
		if(x == lastx) count++;
		else
		{
			ans += count * (count - 1) / 2;
			count = 1;
		}
		lastx = x;
	}
	ans += count * (count - 1) / 2;
	lastx = -big - 1;
	int lasty = -big - 1;
	count = 0;
	for(int i = 0; i < n; i++)
	{
		int y = yx[i].first, x = yx[i].second;
		if(y == lasty) count++;
		else
		{
			ans += count * (count - 1) / 2;
			count = 1;
		}
		lastx = x;
		lasty = y;
	}
	ans += count * (count - 1) / 2;
	for(auto spot : spots)
	{
		count = spot.second;
		//if(count == 1) continue;
		ans -= count * (count - 1) / 2;
	}
	cout << ans;
}

int main()
{
	ios_base::sync_with_stdio(0);
	//int t; cin >> t; while(t--) 
	solve();
}
