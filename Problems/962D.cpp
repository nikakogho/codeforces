#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	set<pair<ll, int>> ms; //value index
	set<pair<int, ll>> answer;
	for(int i = 0; i < n; i++) 
	{
		int x;
		cin >> x;
		ms.insert({x, i});
	}
	while(ms.size() > 0)
	{
		auto it = ms.begin();
		auto x = *it;
		it++;
		if(it == ms.end())
		{
			answer.insert({x.second, x.first});
			break;
		}
		auto y = *it;
		if(x.first != y.first)
		{
			answer.insert({x.second, x.first});
			ms.erase(ms.begin());
		}
		else
		{
			ms.erase(x);
			ms.erase(y);
			ms.insert({ 2 * x.first, y.second });
		}
	}
	cout << answer.size() << endl;
	for(auto p : answer) cout << p.second << " ";
}
