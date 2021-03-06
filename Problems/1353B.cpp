#include <bits/stdc++.h>

using namespace std;

int solve()
{
	int n, k;
	cin >> n >> k;
	int a[n], b[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++) cin >> b[i];
	sort(a, a + n);
	sort(b, b + n);
	reverse(b, b + n);
	int sum = 0;
	for(int i = 0; i < k; i++)
	{
		if(b[i] < a[i]) break;
		a[i] = b[i];
	}
	for(int i = 0; i < n; i++) sum += a[i];
	return sum;
}

int main()
{
	short t;
	cin >> t;
	while(t--) cout << solve() << endl;
}
