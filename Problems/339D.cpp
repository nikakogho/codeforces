#include <bits/stdc++.h>

using namespace std;

struct Tree
{
	int size;
	int n;
	int length;
	int *arr;
	
	Tree(int n, int leaves[])
	{
		length = pow(2, n);
		this->n = n;
		size = length * 2;
		arr = new int[size];
		bool tick = true;
		int index = length;
		for(int i = index; i < size; i++) arr[i] = leaves[i - index];
		while(index > 1)
		{
			if(tick)
				for(int i = index; i < index + length; i += 2)
					arr[i / 2] = arr[i] | arr[i + 1];
			else
				for(int i = index; i < index + length; i += 2)
					arr[i / 2] = arr[i] ^ arr[i + 1];
			index /= 2;
			length /= 2;
			tick = !tick;
		}
		length = size / 2;
	}
	
	int update(int p, int b)
	{
		int index = length + p - 1;
		arr[index] = b;
		bool tick = true;
		for(int i = index; i > 1; i /= 2)
		{
			if(i % 2 == 1) i--;
			if(tick) arr[i / 2] = arr[i] | arr[i + 1];
			else     arr[i / 2] = arr[i] ^ arr[i + 1];
			tick = !tick;
		}
		return arr[1];
	}
};

int main()
{
	ios_base::sync_with_stdio(0);
	int n, m;
	cin >> n >> m;
	int size = pow(2, n);
	int arr[size];
	for(int i = 0; i < size; i++) cin >> arr[i];
	Tree t(n, arr);
	while(m--)
	{
		int p, b;
		cin >> p >> b;
		cout << t.update(p, b) << endl;
	}
}
