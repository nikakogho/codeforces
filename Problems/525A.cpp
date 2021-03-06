#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	string s;
	cin >> n >> s;
	short keys[26];
	for(short i = 0; i < 26; i++) keys[i] = 0;
	int need = 0;
	for(int i = 0; i < 2 * n - 2; i += 2) 
	{
		short key = s[i] - 'a';
		short door = s[i + 1] - 'A';
		keys[key]++;  
		if(keys[door] > 0) keys[door]--;
		else need++;
	}
	cout << need;
	return 0;
}
