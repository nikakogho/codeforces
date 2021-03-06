#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{
	int n;
	cin >> n;
	int A[n];
	for(int i = 0; i < n; i++) cin >> A[i];
	int arr[n * 2];
	int j = 0;
	for(int i = 0; i < n; i += 2, j++) arr[j] = arr[j + n] = A[i];
	for(int i = 1; i < n; i += 2, j++) arr[j] = arr[j + n] = A[i];
	int len = (n + 1) / 2;
	ll sum = 0;
	for(int i = 0; i < len; i++) sum += arr[i];
	ll ans = sum;
	for(int i = 0; i < n; i++)
	{
		sum += arr[i + len] - arr[i];
		ans = max(ans, sum);
	}
	cout << ans;
}

int main()
{
	ios_base::sync_with_stdio(0);
	//int t; cin >> t; while(t--)
	solve();
}
