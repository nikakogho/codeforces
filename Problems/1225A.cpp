#include <bits/stdc++.h>

using namespace std;

int main()
{
	short a, b;
	cin >> a >> b;
	if(a == b) cout << a * 10 << " " << a * 10 + 1;
	else if(a + 1 == b) cout << a << " " << b;
	else if(a == 9 && b == 1) cout << "9 10";
	else cout << -1;
}
