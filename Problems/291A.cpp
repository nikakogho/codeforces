#include <bits/stdc++.h>

using namespace std;

int solve()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	int count = 0;
	int last = 0;
	bool lastChecked = 0;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] == 0) continue;
		if(arr[i] == last)
		{
			if(lastChecked) return -1;
			lastChecked = 1;
		    count++;
		}
		else lastChecked = 0;
		last = arr[i];
	}
	return count;
}

int main()
{
	cout << solve();
}
