#include <bits/stdc++.h>

using namespace std;

int main()
{
	unsigned long long n, x, y;
	cin >> n >> x >> y;
	unsigned long long big = x > y ? x : y, small = x < y ? x : y;
	if(big - 1 > n - small) cout << "Black";
	else cout << "White";
}
