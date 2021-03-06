#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	string s;
	cin >> n >> s;
	string vowels = "aeiouy";
	bool last = false;
	for(int i = 0; i < s.size(); i++)
	{
		bool vowel = false;
		for(char v : vowels) if(s[i] == v) vowel = true;
		if(vowel && last)
		{
			s.erase(s.begin() + i, s.begin() + i + 1);
			i--;
			continue;
		}
		last = vowel;
	}
	cout << s;
}
