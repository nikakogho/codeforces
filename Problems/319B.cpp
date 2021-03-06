#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	int last;
	cin >> last;
	arr[0] = last;
	int size = 1;
	for(int i = 1; i < n; i++)
	{
		int x;
		cin >> x;
		if(x > last) 
		{
			arr[size] = x;
			size++;
		}
		last = x;
	}
	if(size == n) cout << 0;
	else
	{
		int answer = 0;
		int lastsize;
		do
		{
			lastsize = size;
			size = 1;
			answer++;
			last = arr[0];
			for(int i = 1; i < lastsize; i++)
			{
				int x = arr[i];
				if(x > last) 
				{
					arr[size] = x;
					size++;
				}
				last = x;
			}
		}while(lastsize != size);
		cout << answer;
	}
}
