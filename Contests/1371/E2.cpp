#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{
	int n, p;
	cin >> n >> p;
	int arr[n];
	const int N = 262144;
	int b[N] = { 0 };
	for(int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	int count = n;
	for(int i = 0; i < n; i++) b[max(0, arr[i] - arr[n - 1] + n)]++;
	for(int i = 1; i < N; i++) b[i] += b[i - 1];
	int start = 1, end = n;
	for(int i = 1; i <= n; i++) while(b[start + (i - 1)] < i) start++;
	start += arr[n - 1] - n;
	for(int i = 1; i <= n; i++) while(end > 0)
	{
		if(b[end + i - 1] - i + 1 < p) break;
		end--;
	}
	end += arr[n - 1] - n;
	int ans = end - start + 1;
	if(ans < 0) ans = 0;
	cout << ans << endl;
	for(int g = start; g <= end; g++) cout << g << " ";
}

int main()
{
	ios_base::sync_with_stdio(0);
	//int t; cin >> t; while(t--) 
	solve();
}
