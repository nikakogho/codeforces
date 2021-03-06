#include <bits/stdc++.h>

using namespace std;

const int size = 200001;
int n, p, k;
int goods[size];

int solve()
{
	cin >> n >> p >> k;
	for(int i = 0; i < n; i++) cin >> goods[i];
	sort(goods, goods + n);
	int best = 0, prefix = 0;
	for(int i = 0; i < k; i++)
	{
		int cost = prefix;
		if(cost > p) break;
		int count = i;
		for(int j = i + k - 1; j < n; j += k)
		{
			if(cost + goods[j] > p) break;
			count += k;
			cost += goods[j];
		}
		prefix += goods[i];
		if(count > best) best = count;
	}
	return best;
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--) cout << solve() << endl;
}
