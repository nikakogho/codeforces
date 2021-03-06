#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	int n, q;
	cin >> n >> q;
	vector<int> counts;
	counts.assign(n, 0);
	int distinct = 0;
	while(q--)
	{
		int x;
		cin >> x;
		x--;
		if(counts[x]++ == 0) distinct++;
		if(distinct == n)
		{
			for(int i = 0; i < n; i++) if(--counts[i] == 0) distinct--;
			cout << '1';
		}
		else cout << '0';
	}
}
