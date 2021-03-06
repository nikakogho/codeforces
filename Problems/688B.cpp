#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	string a = s;
	reverse(a.begin(), a.end());
	string answer = s + a;
	cout << answer;	
}
