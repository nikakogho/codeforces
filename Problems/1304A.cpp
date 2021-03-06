#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	bool met = 0;
	int count = 0;
	int lastcount = 0;
	for(char c : s)
	{
		if(c == '1' && !met) met = 1;
		else if(c == '1') lastcount = count;
	}
	cout << lastcount;
}
