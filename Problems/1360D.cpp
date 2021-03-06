#include <bits/stdc++.h>

using namespace std;

int solve()
{
	int n, k;
	cin >> n >> k;
	if(n <= k) return 1;
	int sqr = sqrt(n);
	//n = a * b
	//a packages of b shovels each
	//b = n / a
	//b <= k
	//n / a <= k
	//n / k <= a
	int ans = n;
	for(int a = 1; a <= sqr; a++)
	{
		if(n % a > 0) continue;
		int b = n / a;
		
		if(a <= k && b < ans) ans = b;
		if(b <= k && a < ans) ans = a;
	}
	return ans;
}

int main()
{
	short t;
	cin >> t;
	while(t--) cout << solve() << endl;
}
