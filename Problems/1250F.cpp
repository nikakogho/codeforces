#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int x = sqrt(n);
	for(int i = x; i > 0; i--)
	{
		if(n % i == 0)
		{
			int a = i, b = n / i;
			int p = (a + b) * 2;
			cout << p;
			return 0;
		}
	}
}
