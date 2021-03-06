#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	ll counts[n];
	bool opened[n];
	for(int i = 0; i < n; i++) opened[i] = counts[i] = 0;
	set<pair<ll, int>> spots;
	for(int i = 0; i < n; i++)
	{
		ll l, r;
		cin >> l >> r;
		spots.insert( { l, i });
		spots.insert( { r + 1, i });
	}
	//for(auto spot : spots) cout << spot.first << " " << spot.second << endl;
	auto it = spots.begin();
	ll x = it->first;
	opened[it->second] = 1;
	int count = 1;
	for(it++; it != spots.end(); it++)
	{
		ll X = it->first;
		ll delta = X - x;
		int old = count;
		//cout << "delta is " << delta << endl;
		do
		{
			int i = it->second;
			if(opened[i]) count--;
			else { opened[i] = 1; count++; }
			it++;
		}while(it->first == X);
		it--;
		x = X;
		if(old > 0)
		counts[old - 1] += delta;
		old = count;
	}
	for(int i = 0; i < n; i++) cout << counts[i] << " ";
}
