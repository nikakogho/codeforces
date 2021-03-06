#include <bits/stdc++.h>

using namespace std;

int main()
{
	short n, m;
	cin >> n >> m;
	short arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	int sum = 0;
	for(int i = 0; i < m && arr[i] < 0; i++)
		sum -= arr[i];
	cout << sum;
}
