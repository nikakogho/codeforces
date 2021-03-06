#include <bits/stdc++.h>

using namespace std;

string solve()
{
	string s;
	cin >> s;
	bool changed = false;
	int mid = s.size() / 2;
	for(int i = 0; i < mid; i++)
		if(s[i] != s[s.size() - 1 - i])
		{
			if(changed) return "NO";
			changed = true;
		}
	return (changed || (s.size() % 2)) ? "YES" : "NO";
}

int main()
{
	cout << solve();
}
