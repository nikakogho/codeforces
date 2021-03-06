#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	int mid = n / 2;
	int answer[n];
	for(int i = 0; i <= mid; i++)
	{
		if(i * 2 == n) continue;
		int a = arr[i], b = arr[n - 1 - i];
		if(i % 2 == 1)
		{
			answer[i] = a;
			answer[n - 1 - i] = b;
		}
		else
		{
			answer[i] = b;
			answer[n - 1 - i] = a;
		}
	}
	for(int i = 0; i < n; i++) cout << answer[i] << " ";
}
