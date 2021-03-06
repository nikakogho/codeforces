#include <bits/stdc++.h>

using namespace std;

int main()
{
	short t;
	cin >> t;
	while(t--)
	{
		int a, b, n;
		cin >> a >> b >> n;
		int steps = 0;
		while(a <= n && b <= n) 
		{
			if(a < b) a += b;
			else b += a;
			steps++;
		}
		cout << steps << endl;
	}
}
