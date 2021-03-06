#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{
	int n;
	cin >> n;
	int arr[n];
	set<int> misplaced;
	for(int i = 0; i < n; i++) 
	{
		int x;
		cin >> x;
		arr[i] = x - 1;
		if(x - 1 != i) misplaced.insert(i);
	}
	if(misplaced.size() == 0)
	{
		cout << 0 << endl;
		return;
	}
	int left = *misplaced.begin();
	auto it = misplaced.end();
	it--;
	int right = *it;
	for(int i = left; i <= right; i++)
	{
		if(arr[i] == i)
		{
			cout << 2 << endl;
			return;
		}
	}
	cout << 1 << endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t; cin >> t; while(t--)
	solve();
}
