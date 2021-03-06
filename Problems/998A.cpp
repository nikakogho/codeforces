#include <bits/stdc++.h>

using namespace std;

int main()
{
	short n;
	cin >> n;
	short arr[n];
	short minIndex = 0;
	short min = 1000;
	for(short i = 0; i < n; i++) 
	{
		cin >> arr[i];
		if(arr[i] < min)
		{
			min = arr[i];
			minIndex = i;
		}
	}
	if(n == 1) cout << -1;
	else if(n == 2 && arr[0] == arr[1]) cout << -1;
	else cout << "1\n" << (minIndex + 1);
}
