#include <bits/stdc++.h>

using namespace std;

int main()
{
	short t;
	cin >> t;
	while(t--)
	{
		int n, k1, k2;
		cin >> n >> k1 >> k2;
		int max1 = 0, max2 = 0, x;
		while(k1--)
		{
			cin >> x;
			if(x > max1) max1 = x;
		}
		while(k2--)
		{
			cin >> x;
			if(x > max2) max2 = x;
		}
		string answer = max1 > max2 ? "YES" : "NO";
		cout << answer << endl;
	}
}
