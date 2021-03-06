#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	int ones, zeroes;
	cin >> zeroes >> ones;
	if(ones > 2 * (zeroes + 1)) cout << -1;
	else if(zeroes > ones + 1) cout << -1;
	else if(zeroes == ones + 1)
	{
		string answer = "0";
		for(int i = 0; i < ones; i++) answer += "10";
		cout << answer;
	}
	else if(zeroes == ones)
	{
		string s = "";
		for(int i = 0; i < ones; i++) s += "10";
		cout << s;
	}
	else if(ones == zeroes + 1)
	{
		string s = "1";
		for(int i = 0; i < zeroes; i++) s += "01";
		cout << s;
	}
	else
	{
		int remain = ones - zeroes - 1;
		int singles = ones - remain * 2;
		string answer = "11";
		for(int i = 1; i < remain; i++) answer += "011";
		for(int i = 0; i < singles; i++) answer += "01";
		cout << answer;
	}
}
