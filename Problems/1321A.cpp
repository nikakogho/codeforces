#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	short n;
	cin >> n;
	short wins = 0, losses = 0;
	bool a[n], b[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++) cin >> b[i];
	for(int i = 0; i < n; i++)
	{
		if(a[i] && !b[i]) wins++;
		else if(!a[i] && b[i]) losses++;
	}
	if(wins > losses) cout << 1;
	else if(wins == 0) cout << -1;
	else 
	{
		int add = losses - wins + 1;
		int ans = 1 + add / wins + (add % wins > 0);
		cout << ans;
	}
}
