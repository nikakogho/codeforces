#include <bits/stdc++.h>

using namespace std;

int main()
{
	short n, m;
	cin >> n >> m;
	string s[n], t[m];
	for(int i = 0; i < n; i++) cin >> s[i];
	for(int i = 0; i < m; i++) cin >> t[i];
	short q;
	cin >> q;
	while(q--)
	{
		int y;
		cin >> y;
		y--;
		string answer = s[y % n] + t[y % m];
		cout << answer << endl;
	}
}
