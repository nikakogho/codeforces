#include <bits/stdc++.h>

using namespace std;

int main()
{
	short n, m;
	cin >> n >> m;
	short arr[n];
	for(int i = 0; i < n; i++) arr[i] = 0;
	for(int i = 0; i < m; i++) 
	{
		short b;
		cin >> b;
		for(short j = b - 1; j < n && arr[j] == 0; j++) arr[j] = b;
	}
	for(int x : arr) cout << x << " ";
}
