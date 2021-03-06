#include <bits/stdc++.h>

using namespace std;

int main()
{
	//a = 180 * (n - 2) / n
	//a * n = 180 * n - 360
	//n * (180 - a) = 360
	//n = 360 / (180 - a)
	short t;
	cin >> t;
	while(t--)
	{
		short a;
		cin >> a;
		if(360 % (180 - a) == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
