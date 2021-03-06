#include <bits/stdc++.h>

using namespace std;

const int N = 100000;

struct Fenwick
{
	int* arr;
	
	Fenwick(int n, int array[])
	{
		arr = new int[N + 1];
		for(int i = 1; i <= N; i++) arr[i] = 0;
		for(int i = 0; i < n; i++) update(array[i]);
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
		while(index <= N)
		{
			arr[index]++;
			index += index & -index;
		}
	}
};

int main()
{
	ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	Fenwick f(n, arr);
	int q;
	cin >> q;
	while(q--)
	{
		int x;
		cin >> x;
		if(x > N) x = N;
		cout << f.read(x) << endl;
	}
}
