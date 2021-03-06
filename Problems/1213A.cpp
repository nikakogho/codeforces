#include <bits/stdc++.h>

using namespace std;

int main()
{
	short n;
	cin >> n;
	short odds = 0;
	for(int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		odds += x % 2;
	}
	short answer = odds < (n - odds) ? odds : (n - odds);
	cout << answer;
}
