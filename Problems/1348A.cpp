#include <bits/stdc++.h>

using namespace std;

int solve()
{
	int n;
	cin >> n;
	//2 ^ n + (2 + 4 + ... + 2 ^ (n / 2 - 1)) - (2 ^ (n / 2) + 2 ^ (n / 2 + 1) + ... + 2 ^ (n - 1))
	//2 ^ n + (2 ^ (n / 2 - 1) - 1) - ( (2 ^ (n / 2)) * (2 ^ (n / 2) - 1) )
	int a = pow(2, n);
	int b = pow(2, n / 2) - 2;
	int c = pow(2, n / 2) * (pow(2, n / 2) - 1);
	int ans = a + b - c;
	//cout << "a b c : " << a << " " << b << " " << c << endl;
	return ans;
}

int main()
{
	int t;
	cin >> t;
	while(t--) cout << solve() << endl;
}
