#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, t;
	cin >> n >> t;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	for(int i = 0; i < n; i++)
	{
		t -= 86400 - arr[i];
		if(t <= 0)
		{
			cout << (i + 1);
			return 0;
		}
	}
}
