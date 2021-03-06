#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	string s = "";
	for(int i = 0; i < 200; i++) s += 'a';
	char c = 'a';
	cout << s << endl;
	while(n--)
	{
		int x;
		cin >> x;
		if(x < 200) 
		{
			s[x] = s[x] + 1;
			if(s[x] > 'z') s[x] = 'a';
		}
		cout << s << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--)
	solve();
}
