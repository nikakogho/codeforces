#include <bits/stdc++.h>

using namespace std;

short abs(short x)
{
	return x < 0 ? -x : x;
}

int main()
{
	short t;
	cin >> t;
	while(t--)
	{
		short n;
		string s;
		cin >> n >> s;
		string answer = "YES";
		for(short i = 0; i < n / 2; i++)
		{
			short dist = abs(s[i] - s[n - 1 - i]);
			if(dist > 0 && dist != 2)
			{
				answer = "NO";
				break;
			}
		}
		cout << answer << endl;
	}
}
