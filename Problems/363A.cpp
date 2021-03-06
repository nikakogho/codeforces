#include <bits/stdc++.h>

using namespace std;

void write(short n)
{
	string left = n > 4 ? "-O" : "O-";
	string right;
	switch(n % 5)
	{
		case 0: right = "-OOOO"; break;
		case 1: right = "O-OOO"; break;
		case 2: right = "OO-OO"; break;
		case 3: right = "OOO-O"; break;
		case 4: right = "OOOO-";
	}
	string ans = left + "|" + right;
	cout << ans << endl;
}

int main()
{
	int n;
	cin >> n;
	do
	{
		write(n % 10);
		n /= 10;
	}while(n > 0);
}
