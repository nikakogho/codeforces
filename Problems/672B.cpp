#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	if(n > 26) cout << -1;
	else
	{
		string unique = "";
		for(char c : s) if(unique.find(c) == string::npos) unique += c;
		short answer = n - unique.size();
		cout << answer;
	}
}
