#include <bits/stdc++.h>

using namespace std;

int abs(int x)
{
	return x < 0 ? -x : x;
}

int main()
{
	int q;
	cin >> q;
	while(q--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		int delta = abs(a - b);
		if(abs(a - c) > delta) delta = abs(a - c);
		if(abs(b - c) > delta) delta = abs(b - c);
		delta -= 2;
		if(delta < 0) delta = 0;
		cout << delta * 2 << endl;
	}
}
