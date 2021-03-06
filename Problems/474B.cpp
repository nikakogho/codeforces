#include <bits/stdc++.h>

using namespace std;

const int N = 1000000;

struct Fenwick
{
	int* arr;
	
	Fenwick()
	{
		arr = new int[N + 1];
		for(int i = 1; i <= N; i++) arr[i] = 0;
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
	Fenwick f;
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		sum += x;
		f.update(sum);
	}
	int m;
	cin >> m;
	while(m--)
	{
		int x;
		cin >> x;
		int answer = f.read(x - 1) + 1;
		cout << answer << endl;
	}
}
