#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	int n, m;
	cin >> n >> m;
	ll left[5], right[5];
	for(int i = 0; i < 5; i++)
	{
		left[i] = n / 5 + (n % 5 > i);
		right[i] = m / 5 + (m % 5 > i);
	}
	ll total = left[4] * right[4] + left[0] * right[3] + left[1] * right[2]
			 + left[2] * right[1] + left[3] * right[0];
	cout << total;
}
