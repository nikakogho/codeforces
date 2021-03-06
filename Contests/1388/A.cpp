#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	//6 10 14 15
	if(n <= 30) cout << "NO\n";
	//else if(n == 30) cout << "YES\n6 10 14\n";
	else if(n == 36) cout << "YES\n6 10 15 5\n";
	else if(n == 40) cout << "YES\n6 10 15 9\n";
	else if(n == 44) cout << "YES\n10 14 15 5\n";
	else cout << "YES\n6 10 14 " << (n - 30) << endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--) solve();
}
