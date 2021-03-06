#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int sqr = sqrt(n);
	for(int x = sqr; x >= 1; x--)
	{
		if(n % x == 0)
		{
			cout << x << " " << (n / x);
			break;
		}
	}
}
