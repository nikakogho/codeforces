#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	ll sum = 0;
	for(int i = 0; i < n / 2; i++) sum += pow(arr[i] + arr[n - 1 - i], 2);
	cout << sum;
}
