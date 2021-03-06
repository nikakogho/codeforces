#include <bits/stdc++.h>

using namespace std;

int solve()
{
	short n;
	cin >> n;
	short arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	for(int i = 0; i < n; i++) if(arr[i] > i + 1) return i + 1;
	return n + 1;
}

int main()
{
	cout << solve();
}
