#include <bits/stdc++.h>

using namespace std;

int main()
{
	short q;
	cin >> q;
	while(q--)
	{
		short n;
		cin >> n;
		long long sum = 0;
		while(n--)
		{
			long long x;
			cin >> x;
			if(x <= 2048) sum += x;
		}
		if(sum >= 2048) cout << "YES" << endl;
		else cout << "NO" << endl;
	}	
}
