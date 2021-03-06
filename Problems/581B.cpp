#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	int answers[n];
	answers[n - 1] = 0;
	int max = arr[n - 1];
	for(int i = n - 2; i > -1; i--)
	{
		int delta = max + 1 - arr[i];
		if(delta < 0) delta = 0;
		if(arr[i] > max) max = arr[i];
		answers[i] = delta;
	}
	for(int i = 0; i < n; i++) cout << answers[i] << " ";
}
