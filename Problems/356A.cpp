#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	int n, m;
	cin >> n >> m;
	int defeats[n + 1];
	set<int> s;
	s.insert(0);
	for(int i = 1; i <= n; i++)
	{
		s.insert(i);
		defeats[i] = 0;
	}
	while(m--)
	{
		int l, r, x;
		cin >> l >> r >> x;
		auto it1 = s.lower_bound(l);
		auto it2 = s.upper_bound(r);
		stack<int> to_erase;
		for(auto it = it1; it != it2; it++)
		{
			int value = *it;
			if(value != x && defeats[value] == 0) 
			{
				defeats[value] = x;
				to_erase.push(value);
			}
		}
		do
		{
			int x = to_erase.top();
			to_erase.pop();
			s.erase(x);
		}while(!to_erase.empty());
	}
	for(int i = 1; i <= n; i++) cout << defeats[i] << " ";
}
