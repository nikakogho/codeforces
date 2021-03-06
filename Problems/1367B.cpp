#include <bits/stdc++.h>

using namespace std;

int solve()
{
	short n;
	cin >> n;
	bool arr[n];
	vector<short> offOdds, offEvens;
	for(short i = 0; i < n; i++)
	{
		short x;
		cin >> x;
		bool b = x % 2;
		arr[i] = b;
		if(i % 2 != b) 
		{
			if(b) offEvens.push_back(i);
			else offOdds.push_back(i);
		}
	}
	if(offOdds.size() != offEvens.size()) return -1;
	return offOdds.size();
}

int main()
{
	ios_base::sync_with_stdio(0);
	short t;
	cin >> t;
	while(t--) cout << solve() << endl;
}
