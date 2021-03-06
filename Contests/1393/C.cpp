#include <bits/stdc++.h>

using namespace std;

#define ll long long

int solve()
{
	int n;
	cin >> n;
	int arr[n];
	int amounts[n + 1];
	amounts[0] = n;
	for(int i = 1; i <= n; i++) amounts[i] = 0;
	int ihigh = 0;
	map<int, int> counts;
	for(int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		amounts[counts[x]++]--;
		amounts[counts[x]]++;
		ihigh = max(ihigh, counts[x]);
	}
	//workingwith = amounts[ihigh]; //lessers will probably get sorted
	int pairs = amounts[ihigh];
	int size = ihigh;
	//cout << "There are " << pairs << " guys of size " << size << endl;
	if(pairs == 1) return (n - size) / (size - 1);
	int room = pairs * size;
	int free = n - room;
	int extraspace = free / (size - 1);
	int space = pairs - 1 + extraspace;
	return space;
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t; cin >> t; while(t--)
	//solve();
	cout << solve() << endl;
}
