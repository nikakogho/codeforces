#include <bits/stdc++.h>

using namespace std;

string solve()
{
	int n, m;
	cin >> n >> m;
	char last = 'k';
	while(n--)
	{
		string s;
		cin >> s;
		char c = s[0];
		if(c == last) return "NO";
		for(int i = 1; i < m; i++) if(s[i] != c) return "NO";
		last = c;
	}
	return "YES";
}

int main()
{
	cout << solve();
}
