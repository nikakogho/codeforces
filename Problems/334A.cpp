#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int sqr = n * n;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n / 2; j++)
		{
			int s = i * n + j;
			int a = s + 1;
			int b = sqr - s;
			cout << a << " " << b << " ";
		}
		cout << endl;
	}
}
