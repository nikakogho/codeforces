#include <bits/stdc++.h>

using namespace std;

bool is_vowel(char c)
{
	string vowels = "AEIOUY";	
	for(char v : vowels) if(v == c) return true;
	return false;
}

int main()
{
	string s;
	cin >> s;
	int n = s.size();
	int count = 0;
	int max = 0;
	bool was_vowel = false;
	for(char c : s)
	{
		count++;
		if(count > max) max = count;
		if((was_vowel = is_vowel(c)))
			count = 0;
	}
	if(!was_vowel && max == count) max++;
	cout << max;
}
