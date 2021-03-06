#include <bits/stdc++.h>

using namespace std;

int main()
{
	short n, m;
	cin >> n >> m;
	map<string, string> words;
	while(m--)
	{
		string a, b;
		cin >> a >> b;
		if(a.size() <= b.size()) b = a;
		words.insert( { a, b } );
	}
	while(n--)
	{
		string s;
		cin >> s;
		cout << words[s] << " ";
	}
}
