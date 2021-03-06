#include <bits/stdc++.h>

using namespace std;

int main()
{
	//h - 10 < h / 2 + 10
	//h / 2 < 20
	//h < 40
	int t;
	cin >> t;
	while(t--)
	{
		int h, n, m;
		cin >> h >> n >> m;
		for(; h > 20 && n > 0; n--) h = h / 2 + 10;
		if(m * 10 < h) cout << "NO\n";
		else cout << "YES\n";
	}
}
