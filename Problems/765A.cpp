#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string home;
	cin >> home;
	int goes = 0, comes = 0;
	while(n--)
	{
		string s;
		cin >> s;
		string del = "->";
		string leave = s.substr(0, s.find(del));
		string come = s.substr(s.find(del) + 2, s.size() - s.find(del) - 2);
		if(leave == home) goes++;
		else if(come == home) comes++;
	}
	if(goes > comes) cout << "contest";
	else cout << "home";
}
