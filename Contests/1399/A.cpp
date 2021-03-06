#include <bits/stdc++.h>

using namespace std;

string solve()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	for(int i = 0; i < n - 1; i++) if(arr[i + 1] - arr[i] > 1) return "No";
	return "Yes";
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t; cin >> t; while(t--)
	cout << solve() << endl;
}
