#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	int n, m, k;
	cin >> n >> m >> k;
	int lengths[n - 1];
	int a, b;
	cin >> a;
	for(int i = 1; i < n; i++)
	{
		cin >> b;
		lengths[i - 1] = b - a -1 ;// + 1;
		a = b;
	}
	sort(lengths, lengths + n - 1);
	int ans = n;
	for(int i = 0; i < n - k; i++) ans += lengths[i];
	cout << ans;
}
