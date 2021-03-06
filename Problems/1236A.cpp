#include <bits/stdc++.h>

using namespace std;

int main()
{
	short t;
	cin >> t;
	while(t--)
	{
		short a, b, c;
		cin >> a >> b >> c;
		short count = (c / 2) < b ? (c / 2) : b;
		b -= count;
		count += (b / 2) < a ? (b / 2) : a;
		count *= 3;
		cout << count << endl;
	}
}
