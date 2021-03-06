#include <bits/stdc++.h>

using namespace std;

string solve()
{
	int n;
	string s;
	cin >> n >> s;
	int sum = 0;
	for(int i = 0; i < n / 2; i++)
	{
		char c = s[i];
		if(c == '4') sum += 4;
		else if(c == '7') sum += 7;
		else return "NO";
	}
	for(int i = n / 2; i < n; i++)
	{
		char c = s[i];
		if(c == '4') sum -= 4;
		else if(c == '7') sum -= 7;
		else return "NO";
	}
	return sum == 0 ? "YES" : "NO";
}

int main()
{
	cout << solve();	
}
