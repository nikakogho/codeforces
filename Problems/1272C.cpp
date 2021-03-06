#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	string s;
	char letters[k];
	cin >> s;
	for(int i = 0; i < k; i++) cin >> letters[i];
	long long total = 0, count = 0;
	for(char c : s)
	{
		if(find(letters, letters + k, c) == letters + k)
		{
			total += count * (count + 1) / 2;
			count = 0;
		}
		else count++;
	}
	total += count * (count + 1) / 2;
	cout << total;
}
