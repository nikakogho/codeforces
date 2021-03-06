#include <bits/stdc++.h>

using namespace std;

string solve()
{
	string b;
	cin >> b;
	//a -> a
	//ab -> ab
	//aba -> abba
	//abac -> abbaac
	int size = b.size();
	string a;
	a += b[0];
	for(int i = 1; i < size; i += 2) a += b[i];
	return a;
}

int main()
{
	ios_base::sync_with_stdio(0);
	short t;
	cin >> t;
	while(t--) cout << solve() << endl;
}
