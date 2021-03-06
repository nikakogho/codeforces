#include <bits/stdc++.h>

using namespace std;

bool isvowel(char ch)
{
	string vowels = "aeiou";
	for(char c : vowels) if(c == ch) return true;
	return false;
}

int main()
{
	string a, b, c;
	getline(cin, a);
	getline(cin, b);
	getline(cin, c);
	int acount = 0, bcount = 0, ccount = 0;
	for(char ch : a) if(isvowel(ch)) acount++;
	for(char ch : b) if(isvowel(ch)) bcount++;
	for(char ch : c) if(isvowel(ch)) ccount++;
	if(acount == 5 && bcount == 7 && ccount == 5) cout << "YES";
	else cout << "NO";
}
