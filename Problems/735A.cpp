#include <bits/stdc++.h>

using namespace std;

string solve()
{
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	int g = -1, t = -1;
	bool obstacles[n];
	for(int i = 0; i < n; i++) obstacles[i] = s[i] == '#';
	for(int i = 0; i < n; i++)
	{
		if(s[i] == 'G') g = i;
		else if(s[i] == 'T') t = i;
	}
	if(g > t)
	{
		g += t;
		t = g - t;
		g -= t;
	}
	if((t - g) % k > 0) return "NO";
	for(int i = g + k; i < t; i += k) if(obstacles[i]) return "NO";
	return "YES";
}

int main()
{
	cout << solve();
}
