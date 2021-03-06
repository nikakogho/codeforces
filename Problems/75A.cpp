#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b;
	c = a + b;
	string s1 = to_string(a);
	s1.erase(remove(s1.begin(), s1.end(), '0'), s1.end());
	string s2 = to_string(b);
	s2.erase(remove(s2.begin(), s2.end(), '0'), s2.end());
	a = stoi(s1);
	b = stoi(s2);
	string s3 = to_string(c);
	s3.erase(remove(s3.begin(), s3.end(), '0'), s3.end());
	c = stoi(s3);
	string answer = a + b == c ? "YES" : "NO";
	cout << answer;
}
