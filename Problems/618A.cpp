#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n > 0)
	{
		int l = log2(n);
		n -= pow(2, l);
		cout << l + 1 << " ";
	}
}
