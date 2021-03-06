#include <bits/stdc++.h>

using namespace std;

string solve()
{
	string a, b;
	cin >> a >> b;
	string c = "";
	int size = a.size();
	for(int i = 0; i < size; i++)
	{
		if(a[i] < b[i]) return "-1";
		c += b[i];
	}
	return c;
}

int main()
{
	cout << solve();
}
