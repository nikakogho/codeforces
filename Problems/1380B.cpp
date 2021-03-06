#include <bits/stdc++.h>

using namespace std;

int main()
{
	map<char, char> beats = { { 'R', 'P' }, { 'P', 'S' }, { 'S', 'R' } };
	int t;
	cin >> t;
	while(t--)
	{
		string s, ans = "";
		cin >> s;
		map<char, int> counts = { { 'R', 0 }, { 'S', 0 }, { 'P', 0 } };
		for(char c : s) counts[c]++;
		int max = counts['R'];
		char best = 'R';
		if(counts['S'] > max)
		{
			max = counts['S'];
			best = 'S';
		}
		if(counts['P'] > max) best = 'P';
		char ch = beats[best];
		for(int i = 0; i < s.size(); i++) ans += ch;
		cout << ans << endl;
	}
}
