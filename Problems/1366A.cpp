#include <bits/stdc++.h>

using namespace std;

int solve(int a, int b)
{
	if(a >= 2 * b) return b;
	if(b >= 2 * a) return a;
	
	//c shovels and d swords
	
	//a = 2c + d
	//b = 2d + c
	
	int d = (2 * b - a) / 3;
	int c = (a - d) / 2;
	
	int e = c + d;
	
	return e;
}

int main()
{
	short t;
	cin >> t;
	while(t--)
	{
		int a, b;
		cin >> a >> b;
		cout << solve(a, b) << endl;
	}	
}
