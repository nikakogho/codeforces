#include <bits/stdc++.h>

using namespace std;

int main()
{
	short t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++) cin >> arr[i];
		int min = arr[n - 1];
		int count = 0;
		for(int i = n - 2; i >= 0; i--)
		{
			int x = arr[i];
			if(x < min) min = x;
			else if(x > min) count++;
		}
		cout << count << endl;
	}
}
