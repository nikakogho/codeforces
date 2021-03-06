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
		
		for(int i = 1; i <= n; i++)
		{
			int j;
			for(j = 0; j < n; j++) if(arr[j] <= i) break;
			bool working = true;
			for(int j0 = j + 1; j0 < j + i; j0++)
			{
				if(arr[j0] > i)
				{
					working = false;
					break;
				}
			}
			cout << working;
		}
		cout << endl;
	}	
}
