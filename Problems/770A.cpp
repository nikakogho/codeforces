#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	char start = 'a';
	string pattern = "";
	for(int i = 0; i < k; i++)
	{
		pattern += start;
		start++;
	}
	string ans = "";
	for(int i = 0; i < n / k; i++) ans += pattern;
	for(int i = 0; i < n % k; i++) ans += 'a' + i;
	cout << ans;
}
