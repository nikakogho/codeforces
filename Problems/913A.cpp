#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int l = log2(m);
	if(l < n) cout << m;
	else cout << (m % (int)pow(2, n));
}
