#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	int min = abs(arr[0] - arr[n - 1]);
	pair<int, int> indices = { n, 1 };
	for(int i = 1; i < n; i++)
	{
		int dist = abs(arr[i] - arr[i - 1]);
		if(dist < min)
		{
			min = dist;
			indices = { i, i + 1 };
		}
	}
	cout << indices.first << " " << indices.second;
}
