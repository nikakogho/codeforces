#include <bits/stdc++.h>

using namespace std;

int abs(int x)
{
	return x < 0 ? -x : x;
}

int main()
{
	int x, y;
	cin >> x >> y;
	int size = abs(x) + abs(y);
	int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
	if(x > 0 && y > 0) y1 = x2 = size;
	else if(y > 0) x1 = -(y2 = size);
	else if(x > 0) y1 = -(x2 = size);
	else x1 = y2 = -size;
	cout << x1 << " " << y1 << " " << x2 << " " <<  y2;
}
