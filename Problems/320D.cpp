#include <bits/stdc++.h>

using namespace std;

int solve()
{
	int n;
	cin >> n;
	stack<pair<int, int>> st;
	int x;
	cin >> x;
	st.push({-1, x});
	int ans = 0;
	for(int i = 1; i < n; i++)
	{
		cin >> x;
		int time = 0;
		while(st.size() && st.top().second < x)
		{
			time = max(time, st.top().first + 1);
			st.pop();
		}
		if(st.size() == 0) time = -1;
		st.push({time, x});
		ans = max(ans, time + 1);
	}
	return ans;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cout << solve();
}
