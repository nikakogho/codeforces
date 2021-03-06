#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int min = -1;
	int sizes[n];
	for(int i = 0; i < n; i++) cin >> sizes[i];
	for(int size : sizes)
	{
		int t = 0;
		for(int i = 0; i < size; i++)
		{
			int x;
			cin >> x;
			t += x * 5 + 15;
		}
		if(t < min || min == -1) min = t;
	}
	cout << min;
}
