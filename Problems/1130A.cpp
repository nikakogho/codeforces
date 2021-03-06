#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int lefts = 0, rights = 0;
	for(int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if(x > 0) rights++;
		else if(x < 0) lefts++;
	}	
	int half = n / 2 + n % 2;
	if(lefts >= half) cout << -1;
	else if(rights >= half) cout << 1;
	else cout << 0;
}
