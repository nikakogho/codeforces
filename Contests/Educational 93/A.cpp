#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	if(arr[0] + arr[1] <= arr[n - 1])
	{
		cout << "1 2 " << n << endl;
		return;
	}
	cout << -1 << endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t; cin >> t; while(t--)
	solve();
	//cout << solve() << endl;
}
