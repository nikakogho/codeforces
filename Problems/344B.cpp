#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	bool worked = false;
	for(int x1 = 0; x1 <= a; x1++)
	{
		int x2 = a - x1;
		int x3 = b - x1;
		if(x3 == c - x2 && x2 >= 0 && x3 >= 0)
		{
			worked = true;
			cout << x1 << " " << x3 << " " << x2;
			break;
		}
	}
	if(!worked) cout << "Impossible";
}
