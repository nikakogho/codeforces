#include <bits/stdc++.h>

using namespace std;

int solve(int s, int i, int e)
{
	if(s > i + e) return e + 1;
	if(i >= s + e) return 0;
	// s + x > i + e - x
	// 2x > i + e - s
	// x = (i + e - s) / 2 + 1
	// answer = e + 1 - x
	// answer = e - (i + e - s) / 2
	return e - (i + e - s) / 2;
}

int main()
{
	short t;
	cin >> t;
	while(t--)
	{
		int s, i, e;
		cin >> s >> i >> e;
		cout << solve(s, i, e) << endl;	
	}
}
