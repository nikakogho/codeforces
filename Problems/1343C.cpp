#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{
	int n;
	cin >> n;
	ll sum = 0;
	int x;
	cin >> x;
	bool sign = x > 0;
	int cur = x;
	while(--n)
	{
		cin >> x;
		if(sign != (x > 0))
		{
			sign = !sign;
			sum += cur;
			cur = x;
		}
		else if(x > cur) cur = x;
	}
	sum += cur;
	cout << sum << endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t; cin >> t; while(t--) 
	solve();
}
