#include <bits/stdc++.h>

using namespace std;

bool solve()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	long long sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum += arr[i];
		if(sum <= 0) return false;
	}
	sum = 0;
	for(int i = n - 1; i >= 0; i--)
	{
		sum += arr[i];
		if(sum <= 0) return false;
	}
	return true;
}

int main()
{
	ios_base::sync_with_stdio(0);
	short t;
	cin >> t;
	while(t--)
	{
		string answer = solve() ? "YES" : "NO";
		cout << answer << endl;
	}
}
