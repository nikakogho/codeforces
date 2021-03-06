#include <bits/stdc++.h>

using namespace std;

bool magic()
{
	string s;
	cin >> s;
	string last = "";
	for(char c : s)
	{
		if(c == '1') last = "1";
		else if(c == '4')
		{
			if(last == "1") last = "14";
			else if(last == "14") last = "144";
			else return false;
		}
		else return false;
	}	
	return true;
}

int main()
{
	string answer = magic() ? "YES" : "NO";
	cout << answer;
}
