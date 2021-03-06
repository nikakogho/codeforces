#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long n, k;
	cin >> n >> k;
	long long x = (n / 2) / (k + 1);
	long long a = x;
	long long b = x * k;
	long long c = n - a - b;
	cout << a << " " << b << " " << c;
}
