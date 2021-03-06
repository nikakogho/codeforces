#include <bits/stdc++.h>

using namespace std;

int main()
{
	short t;
	cin >> t;
	while(t--)
	{
		int r, g, b;
		cin >> r >> g >> b;
		int arr[] = { r, g, b };
		sort(arr, arr + 3);
		if(arr[2] > arr[0] + arr[1]) cout << arr[0] + arr[1] << endl;
		else cout << (arr[0] + arr[1] + arr[2]) / 2 << endl;
	}
}
