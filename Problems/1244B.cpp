#include <bits/stdc++.h>

using namespace std;

int main()
{
	short t;
	cin >> t;
	
	while(t--)
	{
		short n;
		cin >> n;
		short first = n, last = -1;
		string s;
		cin >> s;
		for(int i = 0; i < s.size(); i++)
		{
			bool stair = s[i] == '1';
			if(stair)
			{
				if(i < first) first = i;
				if(i > last) last = i;
			}
		}
		short a = (n - first) * 2;
		short b = (last + 1) * 2;
		short answer = a > b ? a : b;
		if(answer < n) answer = n;
		cout << answer << endl;
	}
}
