#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	if(n % 4 == 2)
	{
		cout << "NO" << endl;
		return;
	}
	cout << "YES" << endl;
	for(int i = 2; i <= n; i += 2) cout << i << " ";
	for(int i = 1; i <= n - 3; i += 2) cout << i << " ";
	cout << (3 * n / 2 - 1) << endl; 
}

int main()
{
	int t;
	cin >> t;
	while(t--) solve();
}
