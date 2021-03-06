#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	int ans = 0;
	for(int wtotal = 2; wtotal < 101; wtotal++)
	{
		int teams = 0;
		bool picked[n];
		for(int i = 0; i < n; i++) picked[i] = 0;
		for(int i = 0; i < n - 1 && arr[i] < wtotal; i++)
		{
			if(picked[i]) continue;
			int need = wtotal - arr[i];
			for(int j = i + 1; j < n; j++)
			{
				if(picked[j]) continue;
				if(arr[j] == need)
				{
					picked[i] = picked[j] = 1;
					teams++;
					break;
				}
			}
		}
		ans = max(ans, teams);
	}
	cout << ans << endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t; cin >> t; while(t--)
	solve();
}
