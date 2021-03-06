#include <bits/stdc++.h>

using namespace std;

int min(int a, int b)
{
	return a > b ? b : a;
}

int max(int a, int b)
{
	return a < b ? b : a;
}

int getside(int a, int b)
{
	int side1 = max(2 * a, b);
	int side2 = max(a, 2 * b);
	int side3 = max(a + b, a);
	return min(min(side1, side2), side3);
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a, b;
		cin >> a >> b;
		int side = getside(a, b);
		int ans = side * side;
		cout << ans << endl;
	}
}
