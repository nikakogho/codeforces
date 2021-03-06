#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	int a;
	cin >> a;
	int max = a;
	cout << a << " ";
	for(int i = 1; i < n; i++)
	{
		int b;
		cin >> b;
		//b = a - max
		a = b + max;
		cout << a << " ";
		if(a > max) max = a;
	}
}
