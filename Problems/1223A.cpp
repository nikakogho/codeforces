#include <bits/stdc++.h>

using namespace std;

int main()
{
	short q;
	cin >> q;
	while(q--)
	{
		int n;
		cin >> n;
		if(n < 4) cout << (4 - n) << endl;
		else cout << (n % 2) << endl;
	}	
}
