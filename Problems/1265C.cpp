#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	int g = 1, s = 1, b = 1, gold, silver = 0, bronze = 0, i;
	cin >> gold;
    for(i = 1; i < n; i++)
	{
		int x;
		cin >> x;
		if(x == gold) g++;
		else
		{
			silver = x;
			i++;
			break;
		}
	}
	while(s <= g && i < n)
	for(; i < n; i++)
	{
		int x;
		cin >> x;
		if(x == silver) s++;
		else
		{
			silver = x;
			i++;
			break;
		}
	}
	bronze = silver;
	int brinj = 0;
	for(; i < n; i++)
	{
		int x;
		cin >> x;
		if(x == bronze) b++;
		else
		{ 
			brinj = x; 
			i++;
			break; 
		}
	}
	if(g + b + s > n / 2) cout << "0 0 0" << endl;
	else
	{
		b--;
		int count = 1;
		do
		{
			b += count;
			count = 1;
			for(; i < n; i++)
			{
				int x;
				cin >> x;
				if(brinj == x) count++;
				else
				{
					brinj = x;
					i++;
					break;
				}
			}
		}
		while(g + b + s + count <= n / 2);
		if(g >= s || g >= b) cout << "0 0 0" << endl;
		else cout << g << " " << s << " " << b << endl;
	}
	for(; i < n; i++) cin >> brinj;
}

int main()
{
	short t;
	cin >> t;
	while(t--) solve();
}
