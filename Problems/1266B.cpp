#include <bits/stdc++.h>

using namespace std;

string solve()
{
	long long x;
	cin >> x;
	if(x < 15) return "NO";
	short rem = x % 14;
	return (rem > 0 && rem < 7) ? "YES" : "NO";
}

int main()
{
	short t;
	cin >> t;
	while(t--) cout << solve() << endl;
}
