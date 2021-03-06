#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b, c;
    cin >> a >> b >> c;
	int n;
	cin >> n;
	int count = 0;
	while(n--)
	{
		int x;
		cin >> x;
		if(x > b && x < c) count++;
	}	
	cout << count;
}
