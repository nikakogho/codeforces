#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	int answer = 1;
	bool odds[n];
	for(int i = 0; i < n; i++) odds[i] = 0;
	int heights[n];
	heights[1] = 0;
	for(int i = 2; i <= n; i++)
	{
		int x;
		cin >> x;
		int h = heights[x] + 1;
		heights[i] = h;
		odds[h] = !odds[h];
	}
	for(int i = 1; i < n; i++) answer += odds[i];
	cout << answer;
}
