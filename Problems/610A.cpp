#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if(n % 2 == 1) cout << 0;
	else
	{
		int s = n / 4 - (n % 4 == 0);
		cout << s;
	}	
}
