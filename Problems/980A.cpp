#include <bits/stdc++.h>

using namespace std;

int main()
{
	int links = 0, pearls = 0;
	string s;
	cin >> s;
	for(char c : s)
		if(c == '-') links++;
		else pearls++;
	if(pearls == 0 || links % pearls == 0) cout << "YES";
	else cout << "NO";
}
