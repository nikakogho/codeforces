#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, c;
	cin >> n >> c;
	n--;
	cout << 0;
	int t = 0;
	bool e = false;
	int as[n], bs[n];
	for(int i = 0; i < n; i++) cin >> as[i];
	for(int i = 0; i < n; i++) cin >> bs[i];
	for(int i = 0; i < n; i++)
	{
		int a = as[i];
		int b = bs[i];
		if(!e) b += c;
		if(a < b)
		{
			t += a;
			e = false;
		}
		else
		{
			t += b;
			e = true;
		}
		cout << " " << t;
	}
}
