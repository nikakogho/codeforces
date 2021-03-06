#include <bits/stdc++.h>

using namespace std;

int main()
{
	map<int, int> indices;
	int n;
	cin >> n;
	int arr[n];
	for(int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		indices[x] = i;
		arr[i - 1] = x;
	}
	sort(arr, arr + n);
	int ans = arr[n - 2];
	int index = indices[arr[n - 1]];
	cout << index << " " << ans;
}
