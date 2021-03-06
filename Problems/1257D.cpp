#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int arr[n];
		int maxm = 0, maxh = 0;
		for(int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			arr[i] = x;
			if(x > maxm) maxm = x;
		} 
		int m;
		cin >> m;
		pair<int, int> heroes[m];
		for(int i = 0; i < m; i++)
		{
			int p, s;
			cin >> p >> s;
			if(p > maxh) maxh = p;
			heroes[i] = { p, s };
		}
		if(maxh < maxm) cout << -1 << endl;
		else
		{
			int max_kills = 0, i = 0, days = 0;
			do
			{
				max_kills = 0;
				for(auto hero : heroes)
				{
					int kills = 0;
					for(int index = i; index < i + hero.second; index++)
					{
						if(hero.first >= arr[index]) kills++;
						else break;
					}
					if(kills > max_kills) max_kills = kills;
				}
				i += max_kills;
				days++;
			}while(i < n);
			cout << days << endl;
		}
	}	
}
