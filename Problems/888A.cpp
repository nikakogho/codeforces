#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	int count = 0;
	for(int i = 1; i < n - 1; i++)
	{
		int x = arr[i], l = arr[i - 1], r = arr[i + 1];
		if(x < l && x < r) count++;
		else if(x > l && x > r) count++;
	}
	cout << count;
}
