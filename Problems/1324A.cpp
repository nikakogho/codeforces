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
		short rem;
		cin >> rem;
		rem %= 2;
		string ans = "YES\n";
		for(int i = 1; i < n; i++)
		{
			short x;
			cin >> x;
			if(x % 2 != rem) ans = "NO\n";
		}
		cout << ans;
	}
}
