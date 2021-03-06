#include <bits/stdc++.h>

using namespace std;

int main()
{
	short t;
	cin >> t;
	while(t--)
	{
		short a, b, c, d, k;
		cin >> a >> b >> c >> d >> k;
		short p = a / c + (a % c > 0);
		if(d * (k - p) < b) cout << -1 << endl;
		else cout << p << " " << (k - p) << endl;
	}	
}
