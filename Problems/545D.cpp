#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	ll sum = 0;
	int happy = 0;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] < sum) continue;
		sum += arr[i];
		happy++;
	}
	cout << happy;
}
