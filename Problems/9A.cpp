#include <bits/stdc++.h>

using namespace std;

string solve()
{
	short a, b;
	cin >> a >> b;
	if(a < b) a = b;
	short answer = 7 - a;
	switch(answer)
	{
		case 6: return "1/1";
		case 5: return "5/6";
		case 4: return "2/3";
		case 3: return "1/2";
		case 2: return "1/3";
		case 1: return "1/6";
	}
	
	return "0/1";
}

int main()
{
	cout << solve();
}
