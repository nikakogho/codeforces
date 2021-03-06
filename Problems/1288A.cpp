#include <bits/stdc++.h>

using namespace std;

int main()
{
	short t;
	cin >> t;
	while(t--)
	{
		int n, d;
		cin >> n >> d;
		if(n >= d) cout << "YES" << endl;
		else
		{
			bool works = false;
			for(int i = -2; i < 3 && !works; i++)
			{
				int x = sqrt(d) + i;
				if(x < 1) continue;
				works = x + d / (x + 1) + (d % (x + 1) > 0) <= n;
			}
			string answer = works ? "YES" : "NO";
			cout << answer << endl;
		}
	}	
}
