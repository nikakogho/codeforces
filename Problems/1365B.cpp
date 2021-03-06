#include <bits/stdc++.h>

using namespace std;

string solve()
{
	short n;
	cin >> n;
	int a[n];
	bool b[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++) cin >> b[i];
	bool allValues = b[0];
	for(int i = 1; i < n; i++) if(b[i] != allValues) return "YES";
	for(int i = 1; i < n; i++) if(a[i] < a[i - 1]) return "NO";
	return "YES";
}

int main()
{
	ios_base::sync_with_stdio(0);
	short t;
	cin >> t;
	while(t--) cout << solve() << endl;
}
