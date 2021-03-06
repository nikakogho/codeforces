#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	bool **armies = new bool*[m];
	for(int i = 0; i < m; i++)
	{
		bool *army = new bool[20];
		int x;
		cin >> x;
		for(int j = 0; j < 20; j++, x /= 2) army[j] = x % 2;
		armies[i] = army;
	}
	int count = 0;
	int fedors;
	cin >> fedors;
	bool b[20];
	for(int i = 0; i < 20; i++, fedors /= 2) b[i] = fedors % 2;
	for(int i = 0; i < m; i++)
	{
		int delta = 0;
		for(int j = 0; j < 20; j++) delta += b[j] ^ armies[i][j];
		if(delta <= k) count++;	
	}
	cout << count;
}
