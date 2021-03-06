#include <bits/stdc++.h>

using namespace std;

string check(string pass)
{
	if(pass.size() < 5) return "Too weak";
	bool small = 0, big = 0, digit = 0;
	for(char c : pass)
	{
		if(c >= 'a' && c <= 'z') small = 1;
		if(c >= 'A' && c <= 'Z') big = 1;
		if(c >= '0' && c <= '9') digit = 1;
	}
	return small && big && digit ? "Correct" : "Too weak";
}

int main()
{
	string s;
	cin >> s;
	cout << check(s);
}
