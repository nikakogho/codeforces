#include <bits/stdc++.h>

using namespace std;

int solve()
{
	int l, r;
	cin >> l >> r;
	
	if(l < 10) return l;
	
	for(int x = l; x <= r; x++)
	{
		string s = to_string(x);
		short size = s.size();
		bool works = true;
		for(int i = 0; i < size - 1; i++)
		{
			char c = s[i];
			for(int j = i + 1; j < size; j++)
			{
				if(s[j] == c)
				{
					works = false;
					break;
				}
			}
			if(!works) break;
		}
		if(works) return x;
	}
	
	return -1;
}

int main()
{
	cout << solve();
}
