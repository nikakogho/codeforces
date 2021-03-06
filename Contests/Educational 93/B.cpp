#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{
	string s;
	cin >> s;
	vector<int> sizes;
	int size = 0;
	for(char c : s)
	{
		if(c == '0')
		{
			sizes.push_back(size);
			size = 0;
		}
		else size++;
	}
	if(size > 0) sizes.push_back(size);
	sort(sizes.begin(), sizes.end());
	int ans = 0;
	for(int i = sizes.size() - 1; i >= 0; i -= 2) ans += sizes[i];
	cout << ans << endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t; cin >> t; while(t--)
	solve();
	//cout << solve() << endl;
}
