#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	short t;
	cin >> t;
	while(t--)
	{
		short n;
		cin >> n;
		short a[n], b[n];
		for(short i = 0; i < n; i++) cin >> a[i];
		for(short i = 0; i < n; i++) cin >> b[i];
		sort(a, a + n);
		sort(b, b + n);
		for(short i = 0; i < n; i++) cout << a[i] << " ";
		cout << endl;
		for(short i = 0; i < n; i++) cout << b[i] << " ";
		cout << endl;
	}
}
