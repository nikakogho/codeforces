#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	long long x = 0, y = 0;
	sort(arr, arr + n);
	int half = n / 2;
	for(int i = 0; i < half; i++) x += arr[i];
	for(int i = half; i < n; i++) y += arr[i];
	long long answer = x * x + y * y;
	cout << answer;
}
