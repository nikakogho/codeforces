#include <bits/stdc++.h>

using namespace std;

short gcd(short a, short b)
{
	while(a != b)
	{
		if(a > b) a -= b;
		else b -= a;
	}
	return a;
}

int main()
{
	short a, b, n;
	cin >> a >> b >> n;
	bool s = true;
	while(n > 0)
	{
		short amount = gcd(s ? a : b, n);
		n -= amount;
		s = !s;
	}	
	cout << s;
}
