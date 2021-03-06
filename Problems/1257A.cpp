#include <bits/stdc++.h>

using namespace std;

int main()
{
	short t;
	cin >> t;
	while(t--)
	{
		short n, x, a, b;
		cin >> n >> x >> a >> b;
		int delta = a - b;
		if(delta < 0) delta *= -1;
		delta += x;
		if(delta >= n) delta = n - 1;
		cout << delta << endl;
	}
}
