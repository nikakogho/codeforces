#include <bits/stdc++.h>

using namespace std;

string solve()
{
	short n;
	short odds = 0;
	cin >> n;
	short arr[n];
	for(short i = 0; i < n; i++)
	{
		short x;
		cin >> x;
		if(x % 2 == 1) odds++;
		arr[i] = x;
	}
	sort(arr, arr + n);
	//if(odds % 2 != n % 2) return "NO";
	if(odds % 2 == 0) return "YES";
	for(short i = 1; i < n; i++) if(arr[i] - arr[i - 1] == 1) return "YES";
	return "NO";
}

int main()
{
	ios_base::sync_with_stdio(0);
	short t;
	cin >> t;
	while(t--) cout << solve() << endl;
}
