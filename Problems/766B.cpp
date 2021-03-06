#include <bits/stdc++.h>

using namespace std;

string solve()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	for(int i = 0; i < n - 2; i++)
	{
		int a = arr[i], b = arr[i + 1], c = arr[i + 2];
		if(a + b > c && a + c > b && b + c > a) return "YES";
	}	
	return "NO";
}

int main()
{
	cout << solve();
}
