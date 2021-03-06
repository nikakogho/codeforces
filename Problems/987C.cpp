#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	int sizes[n];
	int costs[n];
	for(int i = 0; i < n; i++) cin >> sizes[i];
	for(int i = 0; i < n; i++) cin >> costs[i];
	int inf = 1000000000;
	int answer = inf;
	for(int j = 1; j < n - 1; j++)
	{
		int cost = costs[j];
		int size = sizes[j];
		int costL = inf, costR = inf;
		for(int i = 0; i < j; i++) if(sizes[i] < size && costs[i] < costL) costL = costs[i];
		for(int k = j + 1; k < n; k++) if(sizes[k] > size && costs[k] < costR) costR = costs[k];
		cost += costL + costR;
		if(cost < answer) answer = cost;
	}
	if(answer == inf) answer = -1;
	cout << answer;
}
