#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n;
	string s;
	cin >> n >> s;
	int i;
	string answer = "";
	for(i = 0; i < n; i++)
	{
		if(s[i] == '0') answer += '0';
		else break;
	}
	string sequence = "";
	bool foundzero = 0;
	for(; i < n; i++)
	{
		if(s[i] == '1') sequence += '1';
		else
		{
			sequence = "";
			foundzero = 1;
		}
	}
	if(foundzero) answer += '0';
	answer += sequence;
	cout << answer << endl;
}

int main()
{
	int t;
	cin >> t;
	while(t--) solve();
}
