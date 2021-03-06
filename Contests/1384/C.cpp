#include <bits/stdc++.h>

using namespace std;

int solve()
{
	int n;
	string a, b;
	cin >> n >> a >> b;
	set<int> unsorted;
	for(int i = 0; i < n; i++) 
	{
		if(a[i] > b[i]) return -1;
		if(a[i] < b[i]) unsorted.insert(i);
	}
	int moves;
	for(moves = 0; unsorted.size() > 0; moves++)
	{
		char minc = 'y';
		char minb = 'z';
		set<int> mincindices;
		set<int> toerase;
		for(int i : unsorted) 
		{
			if(a[i] > minc) continue;
			if(a[i] < minc) 
			{
				mincindices.clear();
				minc = a[i];
				minb = b[i];
				toerase.clear();
				toerase.insert(i);
			}
			else if(b[i] < minb) 
			{
				minb = b[i];
				toerase.clear();
				toerase.insert(i);
			}
			else if(b[i] == minb) toerase.insert(i);
			mincindices.insert(i);
		}
		for(int i : toerase) unsorted.erase(i);
		for(int i : mincindices) a[i] = minb;
	}
	return moves;
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--) cout << solve() << endl;
}
