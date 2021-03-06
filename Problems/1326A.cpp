#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	if(n == 1) cout << -1;
	else
	{
		cout << 2;
		for(int i = 1; i < n; i++) cout << 3;	
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--)
	{
		solve();
		cout << endl;
	}
}
