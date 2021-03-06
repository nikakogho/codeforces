#include <bits/stdc++.h>

using namespace std;

int solve()
{
	int n, m;
	cin >> n >> m;
	if(n < m)
	{
		n += m;
		m = n - m;
		n -= m;
	}
	int answer = m * ((n + 1) / 2);
	if(n % 2 == 1) answer -= m / 2;
	return answer;
}

int main()
{
	int t;
	cin >> t;
	while(t--) cout << solve() << endl;
}
