#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int h, w;
	cin >> h >> w;
	int A[w][h];
	for(int y = 0; y < h; y++) for(int x = 0; x < w; x++) cin >> A[x][y];
	for(int y = 0; y < h; y++)
	{
		for(int x = 0; x < w; x++) cout << A[x][y] << " ";
		cout << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	//int t;
	//cin >> t;
	//while(t--)
	solve();
}
