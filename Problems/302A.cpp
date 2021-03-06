#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	int n, m;
	cin >> n >> m;
	int ones = 0;
	for(int i = 0; i < n; i++)
	{
		short x;
		cin >> x;
		if(x == 1) ones++;
	}
	int minus = n - ones;
	int pairing = min(ones, minus);
	while(m--)
	{
		int l, r;
		cin >> l >> r;
		int count = r - l + 1;
		if(count % 2 == 1) cout << 0 << endl;
		else if(count / 2 > pairing) cout << 0 << endl;
		else cout << 1 << endl;
	}
}
