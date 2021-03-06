#include <bits/stdc++.h>

using namespace std;

int abs(int x)
{
	return x < 0 ? -x : x;
}

int main()
{
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	int ans = max(abs(x1 - x2), abs(y1 - y2));
	cout << ans;
}
