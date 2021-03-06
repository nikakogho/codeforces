#include <bits/stdc++.h>

using namespace std;

int main()
{
	int k, n, s, p;
	cin >> k >> n >> s >> p;
	//sheets = k * (n / s + (n % s > 0))
	//papers = sheets / p + (sheets % p > 0)
	int sheets = k * (n / s + (n % s > 0));
	int papers = sheets / p + (sheets % p > 0);
	cout << papers;
}
