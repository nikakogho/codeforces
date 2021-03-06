#include <bits/stdc++.h>

using namespace std;

bool solve()
{
	short n;
	cin >> n;
	short arr[n * n];
	for(short i = 0; i < n * n; i++) cin >> arr[i];
	for(short x = 0; x < n; x++)
	{
		for(short y = 0; y < n; y++)
		{
			short a = arr[y * n + x];
			if(a == 1) continue;
			bool works = false;
			short h[n - 1], v[n - 1];
			for(short i = 0; i < x; i++) h[i] = arr[y * n + i];
			for(short i = x + 1; i < n; i++) h[i - 1] = arr[y * n + i];
			for(short i = 0; i < y; i++) v[i] = arr[i * n + x];
			for(short i = y + 1; i < n; i++) v[i - 1] = arr[i * n + x];
			for(auto H : h)
			{
				for(auto V : v)
				{
					if(H + V == a)
					{
						works = true;
						break;
					}
				}
				if(works) break;
			}
			if(!works) return false;
		}
	}
	return true;
}

int main()
{
	cout << (solve() ? "Yes" : "No");
}
