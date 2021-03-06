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
		sort(arr, arr + n);
		reverse(arr, arr + n);
		int size;
		for(size = 0; size < n; size++) if(arr[size] < size + 1) break;
		cout << size << endl;
	}
}
