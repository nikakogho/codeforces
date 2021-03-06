#include <bits/stdc++.h>

using namespace std;

int solve()
{
	int n, k;
	string s;
	cin >> n >> k >> s;
	int frees = 0;
	int delta = k;
	int lastFreeAt = -k - 1;
	for(int i = 0; i < n; i++)
	{
		if(s[i] == '1') 
		{
			if(i - lastFreeAt <= k) 
			{
				frees--;
				lastFreeAt = -k - 1;
			}
			delta = 0;
		}
		else
		{
			delta++;
			if(delta > k)
			{
				frees++;
				lastFreeAt = i;
				delta = 0;
			}
		}
	}
	return frees;
}

int main()
{
	ios_base::sync_with_stdio(0);
	short t;
	cin >> t;
	while(t--) cout << solve() << endl;
}
