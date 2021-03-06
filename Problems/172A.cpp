#include <bits/stdc++.h>

using namespace std;

int solve()
{
	ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	string words[n];
	for(int i = 0; i < n; i++) cin >> words[i];
	int size = words[0].size();
	string first = words[0];
	for(int i = 0; i < size; i++)
	{
		for(int j = 1; j < n; j++) if(words[j][i] != first[i]) return i;
	}
	return size;
}

int main()
{
	cout << solve();
}
