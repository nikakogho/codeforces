#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	//ios_base::sync_with_stdio(0);
	int n, k;
	cin >> n >> k;
	bool opened[n];
	bool _removed[n];
	for(int i = 0; i < n; i++) _removed[i] = opened[i] = 0;
	set<pair<ll, int>> spots;
	for(int i = 0; i < n; i++)
	{
		ll l, r;
		cin >> l >> r;
		spots.insert( { l, i });
		spots.insert( { r + 1, i });
	}
	auto it = spots.begin();
	ll x = it->first;
	opened[it->second] = 1;
	int count = 1;
	vector<int> removed;
	for(it++; it != spots.end(); it++)
	{
		ll X = it->first;
		cout << "started at x " << X << endl;
		map<int, int, greater<int>> addeds;
		do
		{
			int i = it->second;
			it++;
			if(_removed[i]) continue;
			if(opened[i]) count--;
			else { opened[i] = 1; count++; addeds.insert( { X, i } ); }
		}while(it != spots.end() && it->first == X);
		//cout << "done adding" << endl;
		it--;
		x = X;
		int toclear = count - k;
		//cout << "to clear : " << toclear << endl;
		//cout << "added : " << addeds.size() << endl;
		for(auto it = addeds.begin(); toclear > 0; it++)
		{
			removed.push_back(it->second);
			removed[it->second] = 1;
			toclear--;
		}
		if(count > k) count = k;
		cout << "count is " << count << endl;
	}
	cout << removed.size() << endl;
	for(int i = 0; i < removed.size(); i++) cout << removed[i] + 1 << " ";
}
