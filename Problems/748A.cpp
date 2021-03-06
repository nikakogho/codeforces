#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	char side = k % 2 == 0 ? 'R' : 'L';
	//index = y * 2 * m + x * 2;
	//index / 2 = y * m + x
	//x = (index / 2) % m
	//y = (index / 2 - x) / m
	int mid = (k - 1) / 2;
	int x = mid % m;
	int y = (mid - x) / m;
	cout << y + 1 << " " << x + 1 << " " << side;
}
