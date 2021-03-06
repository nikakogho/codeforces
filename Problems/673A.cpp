#include <bits/stdc++.h>

using namespace std;

int main()
{
	short n;
	cin >> n;
	short offat = 0;
	short last = 0;
	for(short i = 0; i < n; i++)
	{
		short t;
		cin >> t;
		if(offat > 0) continue;
		if(t - last > 15)
		{
			offat = last + 15;
		}
		last = t;
	}
	if(offat == 0) offat = last + 15;
	if(offat > 90) offat = 90;
	cout << offat;
}
