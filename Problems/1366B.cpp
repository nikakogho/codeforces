#include <bits/stdc++.h>

using namespace std;

int min(int a, int b)
{
	return a > b ? b : a;
}

int max(int a, int b)
{
	return a > b ? a : b;
}

int solve()
{
	int n, x, m;
	cin >> n >> x >> m;
	int cansLeftest = x, cansRightest = x;
	while(m--)
	{
		int l, r;
		cin >> l >> r;
		if(l > cansRightest || r < cansLeftest) continue;
		if(l < cansLeftest) cansLeftest = l;
		if(r > cansRightest) cansRightest = r;
	}
	return cansRightest - cansLeftest + 1;
}

int main()
{
	short t;
	cin >> t;
	while(t--) cout << solve() << endl;
}
