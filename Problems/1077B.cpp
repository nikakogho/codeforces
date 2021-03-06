#include <bits/stdc++.h>

using namespace std;

int main()
{
	short n;
	cin >> n;
	bool last;
	cin >> last;
	bool previous = false;
	short count = 0;
	for(int i = 1; i < n; i++)
	{
		bool b;
		cin >> b;
		if(b && !last && previous) { b = 0; count++; }
		previous = last;
		last = b;
	}	
	cout << count;
}
