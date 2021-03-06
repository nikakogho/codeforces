#include <bits/stdc++.h>

using namespace std;

int main()
{
	set<int> X, Y;
	int n;
	cin >> n;
	while(n--)
	{
		int x, y;
		cin >> x >> y;
		X.insert(x);
		Y.insert(y);
	}
	int steps = X.size() > Y.size() ? Y.size() : X.size();
	cout << steps;
}
