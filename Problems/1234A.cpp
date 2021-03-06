#include <bits/stdc++.h>

using namespace std;

int main()
{
	short q;
	cin >> q;
	while(q--)
	{
		short n;
		cin >> n;
		int sum = 0;
		for(int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			sum += x;
		}
		int price = sum / n + (sum % n > 0);
		cout << price << endl;
	}
}
