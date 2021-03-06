#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{
	int n;
	cin >> n;
	const int big = 1e5;
	int counts[2 * big];
	int countsofs[2 * big];
	countsofs[0] = n;
	for(int i = 1; i < n; i++) countsofs[i] = 0;
	for(int i = 0; i < n; i++) 
	{
		int x;
		cin >> x;
		int oldcount = counts[x];
		countsofs[oldcount]--;
		countsofs[oldcount + 1]++;
		counts[x]++;
	}
	int q;
	cin >> q;
	while(q--)
	{
		char add;
		int x;
		cin >> add >> x;
		if(add == '+')
		{
			int oldcount = counts[x];
			countsofs[oldcount]--;
			countsofs[oldcount + 1]++;
			//cout << "Now we have " << (counts[x] + 1) << " of " << x << endl;
			counts[x]++;
		} 
		else 
		{
			int oldcount = counts[x];
			countsofs[oldcount]--;
			countsofs[oldcount - 1]++;
			counts[x]--;
		}
		int left = n - countsofs[0] - countsofs[1];
		left -= countsofs[2] + countsofs[3];
		if(left == 0)
		{
			cout << "NO\n";
			continue;
		}
		if(left > 1)
		{
			cout << "YES\n";
			continue;
		}
		int leftup = left - countsofs[4] - countsofs[5];
		int lefthighest = leftup - countsofs[6] - countsofs[7];
		if(lefthighest || countsofs[2] + countsofs[3] > 1 - leftup) cout << "YES\n";
		else cout << "NO\n";
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	//int t; cin >> t; while(t--);
	solve();
	//cout << solve() << endl;
}
