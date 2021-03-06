#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> empties(n);
	int cap[n], a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> cap[i];
		empties[i] = i;
		a[i] = 0;
	}
	int m;
	cin >> m;
	while(m--)
	{
		char q;
		cin >> q;
		if(q == '1')
		{
			int p, x;
			cin >> p >> x;
			p--;
			auto it = lower_bound(empties.begin(), empties.end(), p);
			auto start = it;
			do
			{
				if(it == empties.end()) break;
				int index = *it;
				int canAdd = cap[index] - a[index];
				int toAdd = x > canAdd ? canAdd : x;
				a[index] += toAdd;
				x -= toAdd;
				if(a[index] == cap[index]) it++;
			}while(x > 0);
			if(start != it) empties.erase(start, it);
		}
		else
		{
			int k;
			cin >> k;
			cout << a[k - 1] << endl;
		}
	}
}
