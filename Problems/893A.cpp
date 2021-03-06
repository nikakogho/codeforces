#include <bits/stdc++.h>

using namespace std;

int main()
{
	short a = 1, b = 2, out = 3;
	short n;
	cin >> n;
	bool works = true;
	while(n--)
	{
		short winner;
		cin >> winner;
		if(winner != a && winner != b) works = false;
		else if(winner == a) 
		{
			short old = out;
			out = b;
			b = old;
		}
		else
		{
			short old = out;
			out = a;
			a = old;
		}
	}
	cout << (works ? "YES" : "NO");
}
