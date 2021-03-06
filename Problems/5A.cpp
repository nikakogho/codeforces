#include <bits/stdc++.h>

using namespace std;

int main()
{
	int sum = 0;
	int count = 0;
	string s;
	while(getline(cin, s) && s.find_first_not_of(' ') != string::npos)
	{
		if(s[0] == '+') count++;
		else if(s[0] == '-') count--;
		else sum += count * (s.size() - 1 - 
		distance(s.begin(), find(s.begin(), s.end(), ':')));
	}
	cout << sum;
}
