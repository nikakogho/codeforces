#include <bits/stdc++.h>

using namespace std;

int main()
{
	short t;
	cin >> t;
	while(t--)
	{
		int b, p, f, h, c;
		cin >> b >> p >> f >> h >> c;
		b /= 2;
		int profit = 0;
		if(h > c)
		{
			int amount = b > p ? p : b;
			profit += amount * h;
			int amount2 = b - amount;
			if(amount2 > f) amount2 = f;
			profit += amount2 * c;
		}
		else
		{
			int amount = b > f ? f : b;
			profit += amount * c;
			int amount2 = b - amount;
			if(amount2 > p) amount2 = p;
			profit += amount2 * h;
		}
		cout << profit << endl;
	}	
}
