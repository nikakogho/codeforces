#include <bits/stdc++.h>

using namespace std;

int main()
{
	short t;
	cin >> t;
	while(t--)
	{
		int a, b, c, r;
		cin >> a >> b >> c >> r;
		int rl = c - r, rr = c + r;
		if(a > b)
		{
			a += b;
			b = a - b;
			a -= b;
		}
		int dist = b - a;
		if(rl < b && rr > a)
		{
			int left = rl > a ? rl : a;
			int right = rr < b ? rr : b;
			dist -= right - left;
		}
		cout << dist << endl;
	}
}
