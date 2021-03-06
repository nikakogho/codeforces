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
		short sum = 0;
		short zeroes = 0;
		for(short i = 0; i < n; i++)
		{
			short x;
			cin >> x;
			sum += x;
			zeroes += x == 0;
		}
		short ans = zeroes + (zeroes + sum == 0);
		cout << ans << endl;
	}
}
