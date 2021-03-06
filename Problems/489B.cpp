#include <bits/stdc++.h>

using namespace std;

int abs(int x)
{
	return x < 0 ? -x : x;
}

int main()
{
	int n;
	cin >> n;
	int boys[n];
	for(int i = 0; i < n; i++) cin >> boys[i];
	sort(boys, boys + n);
	int m;
	cin >> m;
	vector<int> girls(m);
	for(int i = 0; i < m; i++) cin >> girls[i];
	sort(girls.begin(), girls.end());
	int count = 0;
	for(int i = 0; i < n; i++)
	{
		int b = boys[i];
		for(auto it = girls.begin(); it < girls.end(); it++)
		{
			if(abs(*it - b) <= 1)
			{
				girls.erase(it);
				count++;
				break;
			}
		}
	}
	cout << count;
}
