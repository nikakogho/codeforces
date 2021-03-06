#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int all = n / m;
	int extra = n % m;
	int normal = m - extra;
	while(normal--) cout << all << " ";
	all++;
	while(extra--) cout << all << " ";
}
