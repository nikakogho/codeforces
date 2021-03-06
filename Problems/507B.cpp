#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{
	int r, x1, y1, x2, y2;
	cin >> r >> x1 >> y1 >> x2 >> y2;
	int d = r * 2;
	double dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	int steps = (int)(dist / d);
	if(steps * d < dist) steps++;
	cout << steps << endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	//int t; cin >> t; while(t--) 
	solve();
}
