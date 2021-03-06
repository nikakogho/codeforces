#include <bits/stdc++.h>

using namespace std;

#define IT vector<int>::iterator
#define ll long long

int main()
{
	ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	vector<int> arr(n);
	//int indices[n];
	//indices[0] = -1;
	ll sum = 0;
	multiset<ll> sums;
	for(int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		sum += x;
		arr[i] = x;
		//indices[x] = i;
	}
	sums.insert(sum);
	map<int, pair<int, ll>> parts = { { 0, { n - 1, sum } } };
	for(int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		x--;
		auto it = parts.upper_bound(x);
		it--;
		auto p = it->second;
		//for(ll sum : sums) cout << sum << " ";
		//cout << endl;
		sums.erase(sums.lower_bound(p.second));
		if(it->first == x)
		{
			int e = arr[x];
			parts.erase(it);
			sum = p.second - e;
			if(p.first > x)
			{
				parts.insert( { x + 1, { p.first, sum } } );
				sums.insert(sum);
			}
		}
		else if(x == p.first)
		{
			p.first--;
			p.second -= arr[x];
			it->second = p;
			sums.insert(p.second);
		}
		else
		{
			int e = arr[x];
			auto it2 = arr.begin() + x;
			long long s1 = 0;
			for(auto it1 = arr.begin() + it->first; it1 != it2; it1++)
				s1 += *it1;
			long long s2 = p.second - s1 - e;
			//cout << e << " was removed" << endl;
			int ending = p.first;
			p.first = x - 1;
			p.second = s1;
			it->second = p;
			parts.insert( { x + 1, { ending, s2 } } );
			sums.insert(s1);
			sums.insert(s2);
		}
		//cout << "spots in end : ";
		//for(auto spot : parts) cout << spot.first << " ";
		//cout << endl;
		//cout << "sums in end : ";
		//for(ll sum : sums) cout << sum << " ";
		//cout << endl;
		sum = sums.empty() ? 0 : *(sums.rbegin());
		cout << sum << endl;
	}
}
