#include <bits/stdc++.h>

using namespace std;

bool is_vowel(char c)
{
	string vowels = "aeiou";
	for(char v : vowels) if(v == c) return true;
	return false;
}

bool can()
{
	string a, b;
	cin >> a >> b;
	if(a.size() != b.size()) return false;
	for(int i = 0; i < a.size(); i++)
		if(is_vowel(a[i]) ^ is_vowel(b[i])) return false;
	return true;
}

int main()
{
	cout << (can() ? "Yes" : "No");
}
