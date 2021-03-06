#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n, k;
	cin >> n >> k;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	int needs = 0;
	for(int i = 1; i < n; i++)
	{
		int walks = arr[i - 1] + arr[i];
		if(walks >= k) continue;
		int extra = k - walks;
		needs += extra;
		arr[i] += extra;
	}
	cout << needs << endl;
	for(int i = 0; i < n; i++) cout << arr[i] << " ";
}

int main()
{
	ios_base::sync_with_stdio(0);
	solve();
}
