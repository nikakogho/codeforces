#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	string answer = "";
	int count = 0;
	for(int i = 0; i < n; i+=2)
	{
		answer += s[i];
		if(s[i + 1] == s[i])
		{
			count++;
			answer += s[i] == 'b' ? 'a' : 'b';
		} 
		else answer += s[i + 1];
	}	
	cout << count << endl << answer;
}
