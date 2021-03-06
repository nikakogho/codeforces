#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	string wholePart = "";
	wholePart += s[0];
	char wholeending = s[0];
	int i;
	for(i = 1; i < s.size() && s[i] != '.'; i++)
		wholePart += (wholeending = s[i]);
	if(wholeending == '9') cout << "GOTO Vasilisa.";
	else 
	{
		if(i < s.size() && s[i + 1] >= '5') wholePart[i - 1]++;
		cout << wholePart;
	}
}
