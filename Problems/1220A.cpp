#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int ones = 0;
	for(char c : s) ones += c == 'n';
	int zeroes = (n - 3 * ones) / 4;
	for(int i = 0; i < ones; i++) cout << "1 ";
	for(int i = 0; i < zeroes; i++) cout << "0 ";
}
