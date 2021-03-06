#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	int w, h, n;
	cin >> w >> h >> n;
	set<int> xs = { 0, w }, ys = { 0, h };
	multiset<int, greater<int>> ws = { w }, hs = { h };
	while(n--)
	{
		char c;
		cin >> c;
		if(c == 'V')
		{
			int x;
			cin >> x;
			auto it = xs.lower_bound(x);
			int x1 = *it;
			it--;
			int x0 = *it;
			ws.erase(ws.lower_bound(x1 - x0));
			ws.insert(x - x0);
			ws.insert(x1 - x);
			xs.insert(x);
		}
		else
		{
			int y;
			cin >> y;
			auto it = ys.lower_bound(y);
			int y1 = *it;
			it--;
			int y0 = *it;
			hs.erase(hs.lower_bound(y1 - y0));
			hs.insert(y - y0);
			hs.insert(y1 - y);
			ys.insert(y);
		}
		long long answer = 1LL * *ws.begin() * *hs.begin();
		cout << answer << endl;
	}
}
