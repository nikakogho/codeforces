#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	if(n == 2) cout << 6;
	else
	{
		int left = k - 1, right = n - k;
		int count = 3 + left + right;
		count += left * 2;
		count += right * 2;
		count += left < right ? left : right;
		cout << count;
	}
}
