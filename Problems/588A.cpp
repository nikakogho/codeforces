#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long sum = 0;
	int n;
	cin >> n;
	short price = 100;
	while(n--)
	{
		short a, p;
		cin >> a >> p;
		if(p < price) price = p;
		sum += price * a;
	}
	cout << sum;
}
