#include <bits/stdc++.h>

using namespace std;

int solve()
{
	int n;
	cin >> n;
	int arr[n * 2];
	for(int i = 0; i < n * 2; i++) cin >> arr[i];
	sort(arr, arr + n * 2);
	return arr[n] - arr[n - 1];
}

int main()
{
	ios_base::sync_with_stdio(0);
	short t;
	cin >> t;
	while(t--) cout << solve() << endl;
}
