#include <bits/stdc++.h>

using namespace std;

bool solve(int xa, int ya, int xb, int yb, int* R, int* C)
{
	if((R[xa] + C[ya]) % 2 == 1) return false;
	if((R[xb] + C[yb]) % 2 == 1) return false;
	if(xa > xb)
	{
		if(solve(xa - 1, ya, xb, yb, R, C)) return true;
	}
	else if(xa < xb)
	{
		if(solve(xa + 1, ya, xb, yb, R, C)) return true;
	}
	if(ya > yb)
	{
		if(solve(xa, ya - 1, xb, yb, R, C)) return true;
	}
	else if(ya < yb)
	{
		if(solve(xa, ya + 1, xb, yb, R, C)) return true;
	}
	return xa == xb && ya == yb;
}

int main()
{
	int n, q;
	cin >> n >> q;
	int *R = new int[n], *C = new int[n];
	for(int i = 0; i < n; i++) cin >> R[i];
	for(int i = 0; i < n; i++) cin >> C[i];
	while(q--)
	{
		int xa, ya, xb, yb;
		cin >> xa >> ya >> xb >> yb;
	    xa--; ya--; xb--; yb--;
	    string answer = solve(xa, ya, xb, yb, R, C) ? "YES" : "NO";
	    cout << answer << endl;
	}	
}
