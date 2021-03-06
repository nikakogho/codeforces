#include <bits/stdc++.h>

using namespace std;

string solve()
{
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	bool p1 = false, p2 = false;
	string s = s1 + s2 + s3;
	int x = 0, o = 0;
	for(char c : s) if(c == 'X') x++; else if(c == '0') o++;
	if(x - o > 1 || x < o) return "illegal";
	//X
	if(s1 == "XXX" || s2 == "XXX" || s3 == "XXX") p1 = true;
	else for(int i = 0; i < 3; i++)
		if(s1[i] == 'X' && s1[i] == s2[i] && s1[i] == s3[i]) p1 = true;
	if(s2[1] == 'X')
		if(s1[0] == 'X' && s3[2] == 'X') p1 = true;
		else if(s1[2] == 'X' && s3[0] == 'X') p1 = true;
	//0
	if(s1 == "000" || s2 == "000" || s3 == "000") p2 = true;
	else for(int i = 0; i < 3; i++)
		if(s1[i] == '0' && s1[i] == s2[i] && s1[i] == s3[i]) p2 = true;
	if(s2[1] == '0')
		if(s1[0] == '0' && s3[2] == '0') p2 = true;
		else if(s1[2] == '0' && s3[0] == '0') p2 = true;
	if(p1 && p2) return "illegal";
	if(p1) return x == o ? "illegal" : "the first player won";
	if(p2) return x == o ? "the second player won" : "illegal";
	if(x == 5) return "draw";
	if(x == o) return "first";
	return "second";
}

int main()
{
	cout << solve();
}
