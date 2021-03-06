#include <bits/stdc++.h>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
	return a > b;
}

int main() 
{
	short n;
	cin >> n;
	pair<int, int> arr[n];
	for(short i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		arr[i] = { x, i + 1 };
	}
	sort(arr, arr + n, compare);
	int count = 0;
	for(int i = 0; i < n; i++)
	{
		int shots = arr[i].first * i + 1;
		count += shots;
	}
	cout << count << endl;
	for(auto p : arr)
	{
		cout << p.second << " ";
	}
}
