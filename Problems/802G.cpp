#include <bits/stdc++.h>

using namespace std;

string solve()
{
	string s;
	cin >> s;
	string word = "heidi";
	int index = 0;
	for(char c : s)
	{
		if(c == word[index])
		{
			index++;
			if(index == 5) return "YES";
		}
	}
	return "NO";
}

int main()
{
	cout << solve();
}
