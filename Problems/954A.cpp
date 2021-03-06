#include <bits/stdc++.h>

using namespace std;

int main()
{
	short n;
	cin >> n;
	short moves = n;
	string s;
	cin >> s;
	for(int i = 1; i < n; i++)
	{
		if(s[i] != s[i - 1])
		{
			moves--;
			i++;
		}
	}
	cout << moves;
}
