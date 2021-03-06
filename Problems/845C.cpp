#include <bits/stdc++.h>

using namespace std;

string solve()
{
	ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	pair<int, int> shows[n];
	for(int i = 0; i < n; i++) 
	{
		int l, r;
		cin >> l >> r;
		shows[i] = { l, r };
	}
	sort(shows, shows + n);
	//short tvs = 2;
	int end1, end2;
	bool free1 = 1, free2 = 1;
	for(auto show : shows)
	{
		int start = show.first, end = show.second;
		if(!free1 && end1 < start) free1 = 1;
		if(!free2 && end2 < start) free2 = 1;
		if(free1) 
		{
			free1 = 0;
			end1 = end;
		}
		else if(free2)
		{
			free2 = 0;
			end2 = end;
		}
		else return "NO";
	}
	return "YES";
}

int main()
{
	cout << solve();
}
