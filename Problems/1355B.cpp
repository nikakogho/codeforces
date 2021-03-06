#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	int total = 0;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	for(int i = 0, count = 0; i < n; i++) 
	{
		if(arr[i] == ++count) 
		{
			count = 0;
			total++;	
		}
	}
	cout << total << endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	while(t--) solve();
}
