#include <bits/stdc++.h>

using namespace std;

int main()
{
	string pos;
	cin >> pos;
	bool bothH = pos[0] != 'a' && pos[0] != 'h', bothV = pos[1] != '1' && pos[1] != '8';
	if(bothH)
	{
		if(bothV) cout << 8;
		else cout << 5;
	}
	else if(bothV) cout << 5;
	else cout << 3;
}
