#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, l = 0, r = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		bool a, b;
		cin >> a >> b;
		l += a;
		r += b;
	}
	int left = 2 * l > n ? (n - l) : l;
	int right = 2 * r > n ? (n - r) : r;
	int count = left + right;
	cout << count;
}
