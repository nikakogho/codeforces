#include <bits/stdc++.h>

using namespace std;

string solve()
{
		string s;
		cin >> s;
		char last = ' ';
		int size = s.size();
		for(int i = 0; i < size; i++)
		{
			char c = s[i];
			if(c == last && c != '?') return "-1";
			if(c == '?')
			{
				char next = i < (size - 1) ? s[i + 1] : ' ';
				char ans = 'a';
				while(last == ans || next == ans) ans++;
				s[i] = ans;
			}
			last = s[i];
		}
	return s;
}

int main()
{
	short t;
	cin >> t;
	while(t--)
	cout << solve() << endl;
}
