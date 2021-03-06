#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int counts[101];
	for(int i = 1; i < 101; i++) counts[i] = 0;
	for(int i = 0; i < n; i++)
	{
		int r;
		cin >> r;
		while(r--)
		{
			int x;
			cin >> x;
			counts[x]++;
		}
	}
	for(int i = 1; i < 101; i++) if(counts[i] == n) cout << i << " ";
}
