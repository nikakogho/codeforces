#include <bits/stdc++.h>

using namespace std;

string solve(string a, string b)
{
	int asize = a.size(), bsize = b.size();
	for(int i = 0; i + asize <= bsize; i++)
	{
		string s = a;
		for(int j = i; j < i + asize; j++)
		{
			char c = b[j];
			auto it = s.find(c);
			if(it == string::npos) break;
			s.erase(it, 1);
		}
		if(s.size() == 0) return "YES";
	}
	return "NO";
}

int main()
{
	short t;
	cin >> t;
	while(t--)
	{
		string a, b;
		cin >> a >> b;
		cout << solve(a, b) << endl;
	}
}
