#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	pair<int, int> spots[n];
	int count = 1;
	int last;
	cin >> last;
	vector<int> v = { -1 };
	spots[0] = { last, 1 };
	for(int i = 1; i < n; i++) 
	{
		int x;
		cin >> x;
		if(x != last)
		{
			last = x;
			count++;
			v.push_back(i + 1);
		}
		spots[i] = { x, count };
	}
	v.push_back(n + 1);
	for(int i = 0; i < n; i++) spots[i].second = v[spots[i].second];
	while(m--)
	{
		int l, r, x;
		cin >> l >> r >> x;
		auto spot = spots[l - 1];
		if(spot.first != x) cout << l << endl;
		else if(spot.second <= r) cout << spot.second << endl;
		else cout << -1 << endl;
	}
}
