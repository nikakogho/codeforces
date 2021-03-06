#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ios_base::sync_with_stdio(0);
	int n, q;
	cin >> n >> q;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	int nums[n + 1];
	for(int i = 1; i <= n; i++) nums[i] = 0;
	while(q--)
	{
		int l, r;
		cin >> l >> r;
		nums[l]++;
		if(r < n)
		nums[r + 1]--;
	}
	multiset<int, greater<int>> counts;
	int count = 0;
	for(int i = 1; i <= n; i++)
	{
		count += nums[i];
		if(count > 0)
		counts.insert(count);
	}
	ll sum = 0;
	auto it = arr + n - 1;
	for(int count : counts)
	{
		sum += 1LL * *it * count;
		it--;
	}
	cout << sum;
}
