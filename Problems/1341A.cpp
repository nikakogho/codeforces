#include <bits/stdc++.h>

using namespace std;

string solve()
{
	int n, a, b, c, d;
	cin >> n >> a >> b >> c >> d;
	int w1 = a - b, w2 = a + b;
	int y1 = c - d, y2 = c + d;
	for(int w = w1; w <= w2; w++)
	{
		int x = w * n;
		if(x >= y1 && x <= y2) return "Yes";
	}
	return "No";
}

int main()
{
	int t;
	cin >> t;
	while(t--) cout << solve() << endl;	
}
