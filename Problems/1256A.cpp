#include <bits/stdc++.h>

using namespace std;

int main()
{
	int q;
	cin >> q;
	while(q--)
	{
		int a, b, n, s;
		cin >> a >> b >> n >> s;
		int x = s / n;
		if(x > a) x = a;
		s -= x * n;
		if(s > b) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
}
