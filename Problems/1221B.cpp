#include <bits/stdc++.h>

using namespace std;

int main()
{
	short n;
	cin >> n;
	
	for(short y = 0; y < n; y++)
	{
		for(short x = 0; x < n; x++)
		{
			char c = (x + y) % 2 == 0 ? 'W' : 'B';
			cout << c;
		}
		cout << endl;
	}	
}
