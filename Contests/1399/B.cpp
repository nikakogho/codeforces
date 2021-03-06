#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	long long moves = 0;
	int amin = 1e9, bmin = 1e9;
	int a[n], b[n];
	for(int i = 0; i < n; i++) 
	{
		cin >> a[i];
		amin = min(amin, a[i]);
	}
	for(int i = 0; i < n; i++) 
	{
		cin >> b[i];
		bmin = min(bmin, b[i]);
	}
	for(int i = 0; i < n; i++) moves += max(a[i] - amin, b[i] - bmin);
	cout << moves << endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t; cin >> t; while(t--)
	solve();
}
