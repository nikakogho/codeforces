#include <bits/stdc++.h>

using namespace std;

string solve()
{
	string a, b, c;
	cin >> a >> b >> c;
	if(a != b && b != c && a != c) return "?";
	if(a == b && b == c) return "?";
	if(a == "rock" && b == c && b == "scissors") return "F";
	if(b == "rock" && a == c && a == "scissors") return "M";
	if(c == "rock" && a == b && a == "scissors") return "S";
	
	if(a == "paper" && b == c && b == "rock") return "F";
	if(b == "paper" && a == c && a == "rock") return "M";
	if(c == "paper" && a == b && a == "rock") return "S";
	
	if(a == "scissors" && b == c && b == "paper") return "F";
	if(b == "scissors" && a == c && a == "paper") return "M";
	if(c == "scissors" && a == b && a == "paper") return "S";
	
	return "?";
}

int main()
{
	cout << solve();
}
