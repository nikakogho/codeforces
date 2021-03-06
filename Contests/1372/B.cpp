#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	int last = sqrt(n);
	for(int i = 2; i <= last; i++)
	{
		if(n % i == 0)
		{
			int a = n / i;
			int b = n - a;
			cout << a << " " << b << endl;
			return;
		}
	}
	cout << "1 " << (n - 1) << endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t; cin >> t; while(t--)
	solve();
}
