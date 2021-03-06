#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	bool worked = false;
	for(int b = n / 2; b > -1; b--)
	{
		int a = n - b;
		if(a % m > 0) continue;
		cout << a;
		worked = true;
		break;
	}
	if(!worked) cout << -1;
}
