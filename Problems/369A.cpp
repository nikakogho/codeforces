#include <bits/stdc++.h>

using namespace std;

int main()
{
	short n, m, k;
	cin >> n >> m >> k;
	while(n--)
	{
		short a;
		cin >> a;
		if(a == 1) m--;
		else if(k > 0) k--;
		else m--;
	}
	short answer = m < 0 ? -m : 0;
	cout << answer;
}
