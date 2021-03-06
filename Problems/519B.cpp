#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	map<int, short> m;
	for(int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		m.insert( { x, 0 } );
	}
	for(int i = 1; i < n; i++)
	{
		int x;
		cin >> x;
		m[x] = 1;
	}
	for(auto p : m)
	{
		if(p.second == 0)
		{
			cout << p.first << endl;
			p.second = 2;
			break;
		}
	}
	for(int i = 2; i < n; i++)
	{
		int x;
		cin >> x;
		m[x] = 2;
	}
	for(auto p : m)
	{
		if(p.second == 1)
		{
			cout << p.first;
			break;
		}
	}
}
