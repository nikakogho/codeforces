#include <bits/stdc++.h>

using namespace std;

int main()
{
	int q;
	cin >> q;
	while(q--)
	{
		int c, m, x;
		cin >> c >> m >> x;
		int fills = c > m ? m : c;
		int extra = c + m + x - 2 * fills;
		int answer;
		if(extra >= fills) answer = fills;
		else answer = (c + m + x) / 3;
		cout << answer << endl;
	}	
}
