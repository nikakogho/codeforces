#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long n;
	cin >> n;
	long long count = n * (n + 1) / 2;
	for(int i = 1; i < n; i++)
	{
		count += (n - i - 1) * i;
	}
	//(n - 1) * 1 + (n - 2) * 2 + (n - 3) * 3 + (n - 4) * 4
	cout << count;
}
