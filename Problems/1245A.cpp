#include <bits/stdc++.h>

using namespace std;

int main()
{
	short t;
	cin >> t;
	while(t--)
	{
		int a, b;
		cin >> a >> b;
		while(a != b)
			if(a > b) a -= b;
			else b -= a;
		string answer = a == 1 ? "Finite" : "Infinite";
		cout << answer << endl;
	}
}
