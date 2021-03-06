#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, ones = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		short x;
		cin >> x;
		ones += x == 1;
	}
	int twos = n - ones;
	int min = twos > ones ? ones : twos;
	int teams = min;
	ones -= min;
	teams += ones / 3;
	cout << teams;
}
