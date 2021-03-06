#include <bits/stdc++.h>

using namespace std;

int main()
{
	short t;
	cin >> t;
	while(t--)
	{
		short h, m;
		cin >> h >> m;
		short answer = (24 - h) * 60 - m;
		cout << answer << endl;
	}
}
