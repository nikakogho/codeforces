#include <bits/stdc++.h>

using namespace std;

int solve()
{
	int n, d;
	cin >> n >> d;
	string s;
	cin >> s;
	int steps = 0;
	int loc = 0;
	while(loc < n - 1)
	{
		int next;
		for(next = loc + d; next > loc; next--) if(s[next] == '1') break;
		if(next == loc) return -1;
		steps++;
		loc = next;
	}
	return steps;
}

int main()
{
	cout << solve();
}
