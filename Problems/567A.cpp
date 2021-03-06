#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	int min = arr[0], max = arr[n - 1];
	cout << arr[1] - arr[0] << " " << max - min << endl;
	for(int i = 1; i < n - 1; i++)
	{
		int a = arr[i] - arr[i - 1];
		int b = arr[i + 1] - arr[i];
		int minCost = a > b ? b : a;
		a = arr[i] - min;
		b = max - arr[i];
		int maxCost = a > b ? a : b;
		cout << minCost << " " << maxCost << endl;
	}
	cout << arr[n - 1] - arr[n - 2] << " " << max - min;
}
