#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	short t;
	cin >> t;
	while(t--)
	{
		int n, m;
		cin >> n >> m;
		int a;
		cin >> a;
		for(int i = 1; i < n; i++)
		{
			int x;
			cin >> x;
			a += x;
		}
		if(a > m) a = m;
		cout << a << endl;
	}
}
