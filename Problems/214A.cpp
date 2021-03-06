#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int lima = sqrt(n);
	int count = 0;
	for(int a = 0; a <= lima; a++)
	{
		int b = n - a * a;
		if(b * b + a == m) count++;
	}
	cout << count;
}
