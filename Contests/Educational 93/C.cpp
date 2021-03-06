#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{
	int n;
	string s;
	cin >> n >> s;
	ll ans = 0;
	int prefs[n];
	prefs[0] = 0;
	short arr[n];
	int off = 0;
	map<int, int> counts;
	for(int i = 0; i < n; i++)
	{
		char c = s[i];
		short x = c - '0'; //[0, 9]
		off += x - 1;
		arr[i] = off;
		prefs[i] = off;
	}
	for(int i = 0; i < n; i++)
	{
		int needed = prefs[i];
		if(needed == 0) ans++;
		auto it = counts.find(needed);
		if(it != counts.end())
		{
			//cout << "For i = " << i << " there are " << it->second << " options" << endl;
			ans += it->second;
		}
		counts[needed]++;
	}
	cout << ans << endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t; cin >> t; while(t--)
	solve();
	//cout << solve() << endl;
}
