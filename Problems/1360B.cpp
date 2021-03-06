#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	short t;
	cin >> t;
	while(t--)
	{
		short n;
		cin >> n;
		multiset<int> s;
		for(int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			s.insert(x);
		}
		auto it = s.begin();
		int a = *it;
		int ans = 999;
		for(it++; it != s.end(); it++)
		{
			int b = *it;
			int delta = b - a;
			if(delta < ans) ans = delta;
			a = b;
		}
		cout << ans << endl;
	}
}
