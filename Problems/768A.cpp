#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	int min = arr[0], max = arr[n - 1];
	int left = 1, right = n - 2;
	for(; left < n; left++) if(arr[left] > min) break;
	for(; right > 0; right--) if(arr[right] < max) break;
	if(left > right) cout << 0;
	else cout << right - left + 1;
}
