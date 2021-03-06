#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	short t;
	cin >> t;
	while(t--)
	{
		int a, b;
		cin >> a >> b;
		if(a % b == 0) cout << 0 << endl;
		else if(a < b) cout << (b - a) << endl;
		else cout << (b - (a % b)) << endl;
	}
}
