#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int count = 0;
	int max = 0;
	bool arr[2 * n];
	for(int i = 0; i < n; i++)
	{
		bool x;
		cin >> x;
		arr[i] = arr[n + i] = x;
	}
	for(bool b : arr)
	{
		if(b)
		{
			count++;
			if(count > max) max = count;
		}
		else count = 0;
	}
	cout << max;
}
