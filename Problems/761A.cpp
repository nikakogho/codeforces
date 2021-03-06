#include <bits/stdc++.h>

using namespace std;

int main()
{
	short a, b;
	cin >> a >> b;
	short delta = a - b;
	if(delta > 1 || delta < -1 || a + b == 0) cout << "NO";
	else cout << "YES";	
}
