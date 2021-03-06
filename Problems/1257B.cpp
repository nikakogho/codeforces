#include <bits/stdc++.h>

using namespace std;

bool works(long long x, int y)
{
	if(x >= y) return true;
	if(x == 1) return false;
	if(x % 2 == 0) x = x * 3 / 2;
	return x > 3 || y == 3;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int x, y;
		cin >> x >> y;
		cout << (works(x, y) ? "Yes" : "No") << endl;
	}	
}
