#include <bits/stdc++.h>

using namespace std;

int main()
{
	short n, k, x;
	cin >> n >> k >> x;
	short sum = 0;
	for(short i = 0; i < n; i++)
	{
		short a;
		cin >> a;
		if(a > x && n - i <= k) a = x;
		sum += a;
	}	
	cout << sum;
}
