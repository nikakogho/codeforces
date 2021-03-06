#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	reverse(s.begin(), s.end());
	int i = stoi(s);
	s = to_string(i);
	int mid = s.size() / 2;
	string answer = "YES";
	for(int i = 0; i < mid; i++)
	{
		if(s[i] != s[s.size() - 1 - i])
		{
			answer = "NO";
			break;
		}
	}
	cout << answer;
}
