#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		string answer = n % 4 == 0 ? "YES" : "NO";
		cout << answer << endl;
	}
}
