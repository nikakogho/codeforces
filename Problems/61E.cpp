#include <bits/stdc++.h>

using namespace std;

#define ll long long

struct Fenwick
{
	int n;
	int* arr;
	
	Fenwick(int n)
	{
		this->n = n;
		arr = new int[n + 1];
		for(int i = 0; i <= n; i++) arr[i] = 0;
	}
	
	ll read(int index)
	{
		ll sum = 0;
		while(index > 0)
		{
			sum += arr[index];
			index -= index & -index;
		}
		return sum;
	}
	
	void update(int index)
	{
		while(index <= n)
		{
			arr[index]++;
			index += index & -index;
		}
	}
};

int main()
{
	int n;
	cin >> n;
	ll arr[n], arr2[n];
	for(int i = 0; i < n; i++)
	{
		ll x;
		cin >> x;
		arr[i] = arr2[i] = x;
	}
	sort(arr2, arr2 + n);
	ll sum = 0;
	Fenwick f(n);
	for(int i = 0; i < n; i++)
	{
		int x = lower_bound(arr2, arr2 + n, arr[i]) - arr2 + 1;
		ll t = f.read(x);
		ll left = i - t;
		ll right = x - 1 - t;
		sum += left * right;
		f.update(x);
	}
	cout << sum;
}
