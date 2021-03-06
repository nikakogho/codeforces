#include <bits/stdc++.h>

using namespace std;

string solve()
{
	string a, b;
	cin >> a >> b;
	string c = a;
	sort(c.begin(), c.end());
	int n = a.size();
	for(int l = 0; l < a.size(); l++)
	{
		if(a[l] == c[l]) continue;
		int r = l;
		for(int j = n - 1; j > l; j--) if(a[j] < a[r]) r = j;
		if(r == l) continue;
		swap(a[l], a[r]);
		break;
	}
	n = min(n, (int)b.size());
	for(int i = 0; i < n; i++)
	{
		if(a[i] < b[i]) return a;
		if(a[i] > b[i]) return "---";
	}
	return a.size() < b.size() ? a : "---";
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--) cout << solve() << endl;
}
