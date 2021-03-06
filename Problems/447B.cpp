#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int k;
	cin >> k;
	int values[26];
	int max = 0;
	for(int i = 0; i < 26; i++)
	{
		cin >> values[i];
		if(values[i] > max) max = values[i];
	}
	long long sum = 0;
	for(int i = 1; i <= s.size(); i++) sum += i * values[s[i - 1] - 97];
	long long n = s.size();
	sum += max * (n * k + k * (k + 1) / 2);
	cout << sum;
}
