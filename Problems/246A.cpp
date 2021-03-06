#include <bits/stdc++.h>

using namespace std;

int main()
{
	short n;
	cin >> n;
	if(n <= 2) cout << -1;
	else 
	{
		cout << "3 2 ";
		for(int i = n - 2; i > 0; i--) cout << "1 ";
	}
}
