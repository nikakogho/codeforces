#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	string s;
	cin >> n;
	getline(cin, s);
	getline(cin, s);
	int ans = 0, count = 0;
	char start = 'A', end = 'Z';
	for(char c : s)
	{
		if(c >= start && c <= end)
		{
			count++;
			if(ans < count) ans = count;
		}
		else if(c == ' ') count = 0;
	}
	cout << ans;
}
