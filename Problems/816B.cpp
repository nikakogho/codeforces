#include <bits/stdc++.h>

using namespace std;

#define ll long long

struct Fenwick
{
	int n, *arr;
	
	Fenwick(int n, bool old[])
		:n(n)
	{
		arr = new int[n + 1];
		for(int i = 0; i <= n; i++) arr[i] = 0;
		
		for(int i = 0; i < n; i++)
			if(old[i]) update(i + 1);
	}
	
	int read(int index)
	{
		int sum = 0;
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
	
	void write()
	{
		for(int i = 1; i < n + 1; i++)
		{
			int x = arr[i];
			if(x > 0) cout << "Tree at " << i << " = " << x << endl;
		}
	}
};

int main()
{
	ios_base::sync_with_stdio(0);
	const int n = 1 << 18;
	int q1, k, q2;
	cin >> q1 >> k >> q2;
	int arr[n];
	bool sums[n];
	for(int i = 0; i < n; i++) arr[i] = sums[i] = 0;
	while(q1--)
	{
		int l, r;
		cin >> l >> r;
		arr[l - 1]++;
		if(r < n) arr[r]--;
	}
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum += arr[i];
		sums[i] = sum >= k;
		//if(sum > 0)
		//cout << "Sum at " << i << " is " << sum << endl;
	}
	Fenwick f(n, sums);
	//f.write();
	while(q2--)
	{
		int l, r;
		cin >> l >> r;
		int answer = f.read(r) - f.read(l - 1);
		cout << answer << endl;
	}
}
