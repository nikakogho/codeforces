#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{
	int a, b;
	cin >> a >> b;
	int time = 0;
	do
	{
		while(a > 2) 
		{
			b++;
			a -= 2;
			time++;
		}
		while(b > 2)
		{
			a++;
			b -= 2;
			time++;
		}
	}while(a > 2 || b > 2);
	if((a >= 2 || b >= 2) && a > 0 && b > 0) time++;
	cout << time;
}

int main()
{
	ios_base::sync_with_stdio(0);
	//int t; cin >> t; while(t--) 
	solve();
}
