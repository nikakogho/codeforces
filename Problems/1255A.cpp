#include <bits/stdc++.h>

using namespace std;

int main()
{
	short t;
	cin >> t;
	while(t--)
	{
		int a, b;
		cin >> a >> b;
		int delta = a - b;
		if(delta < 0) delta *= -1;
		int count = delta / 5;
		delta -= count * 5;
		int twos = delta / 2;
		count += twos;
		delta -= twos * 2;
		count += delta;
		cout << count << endl;
	}
}
