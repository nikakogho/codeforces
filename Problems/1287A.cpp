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
		string s;
		cin >> s;
		short max = 0, count = 0;
		bool started = false;
		for(char c : s)
		{
			if(c == 'A') started = 1, count = 0;
			else if(started)
			{
				count++;
				if(count > max) max = count;
			}
		}
		cout << max << endl;
	}
}
