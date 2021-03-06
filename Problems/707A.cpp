#include <bits/stdc++.h>

using namespace std;

int main()
{
	short n, m;
	cin >> n >> m;
	bool color = false;
	for(short y = 0; y < n; y++)
	{
		for(short x = 0; x < m; x++)
		{
			char c;
			cin >> c;
			if(c == 'C' || c == 'M' || c == 'Y') color = true;
		}
	}
	if(color) cout << "#Color";
	else cout << "#Black&White";
}
